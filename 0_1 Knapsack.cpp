#include<bits/stdc++.h>
using namespace std;
int profit(int n, int c, int *wt,int *prices)
{
    if(n==0 || c==0)
    {
        return 0;
    }
    int ans=0;
    int inc=INT_MIN,exc=INT_MIN;
    if(wt[n-1]<=c)
    {
        inc=prices[n-1]+profit(n-1,c-wt[n-1],wt,prices);
    }
    exc=profit(n-1,c,wt,prices);
    ans=max(inc,exc);
    return ans;
}
int main()
{
    int wt[]={1,2,3,5};
    int prices[]={40,20,30,100};
    int n=4;
    int c=7;
    cout<<profit(n,c,wt,prices)<<endl;
    return 0;
}
