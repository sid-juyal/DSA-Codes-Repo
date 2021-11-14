#include<bits/stdc++.h>
using namespace std;
void filter_chars(int n,char a[])
{
    int j=0;
    while(n>0)
    {
        int last_digit=(n&1);
        if(last_digit==1)
        {
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}
//loop from 0 to 7 (as 1<<3 means 2^3) for "abc"
void print_subset(char a[])
{
    int n=strlen(a);
    for(int i=0;i<(1<<n);i++)
    {
        filter_chars(i,a);
    }
    return;
}
int main()
{
    char a[100];
    cin>>a;
    print_subset(a);
    return 0;
}
