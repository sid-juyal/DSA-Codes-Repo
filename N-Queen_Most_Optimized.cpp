#include<bits/stdc++.h>
using namespace std;

int ans=0,DONE;

void solve(int RowMask,int ld, int rd)  //ld=left diagonal, rd= right diagonal
{
    if(RowMask==DONE)
    {
        ans++;
        return;
    }
    int safe=DONE & (~(RowMask | ld | rd));
    while(safe)
    {
        int p=safe & (-safe);
        safe=safe-p;
        solve(RowMask | p, (ld | p)<<1, (rd | p)>>1);
    }
}
int main()
{
    int n;
    cin>>n;
    DONE=((1<<n)-1);
    solve(0,0,0);
    cout<<ans;
    return 0;
}
