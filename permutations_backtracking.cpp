#include<bits/stdc++.h>
using namespace std;
void permute(char *a, int i,set<string> &s)
{
    if(a[i]=='\0')
    {
        //cout<<a<<", ";
        //cout<<endl;
        string t(a);
        s.insert(t);
        return;
    }
    for(int j=i;a[j]!='\0';j++)
    {
        swap(a[i],a[j]);
        permute(a,i+1,s);
        //Backtrack-To restore original array
        swap(a[i],a[j]);
    }
}
int main()
{
    char a[1000];
    set<string>s;
    cin>>a;
    cout<<"Permutations are:"<<endl;
    permute(a,0,s);
    for(auto sid:s)
    {
        cout<<sid<<", ";
    }
    return 0;
}
