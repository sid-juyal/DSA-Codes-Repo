#include<bits/stdc++.h>
using namespace std;
bitset<30> col,d1,d2;  // type of boolean array for column, and two upper diagonals
// r+c = constant while moving up right diagonal
// r-c = constant while moving up left diagonal. (also n-1 is added to make it zero index and store in an array)
void solve(int r, int n, int &ans)
{
    if(r==n)
    {
        ans++;
        return;
    }
    for(int c=0;c<n;c++)
    {
        if(!col[c] && !d1[r-c+n-1] && !d2[r+c])
        {
            col[c]=d1[r-c+n-1]=d2[r+c]=1;
            solve(r+1,n,ans);
            col[c]=d1[r-c+n-1]=d2[r+c]=0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ans=0;
    solve(0,n,ans);
    cout<<endl<<"Ans is : "<<ans<<endl;
    return 0;
}
