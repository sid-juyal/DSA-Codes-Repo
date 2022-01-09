#include<bits/stdc++.h>
using namespace std;
//complexity O(TN)
int min_coins(int n,int coins[],int t,int dp[])
{
    if(n==0)
    {
        return 0;
    }
    //lookup
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int ans=INT_MAX;
    for(int i=0;i<t;i++)
    {
        if(n-coins[i]>=0)
        {
            int subprob=min_coins(n-coins[i],coins,t,dp);
            ans=min(ans,subprob+1);
        }
    }
    dp[n]=ans;
    return dp[n];
}
int main()
{
    int n=15;
    int coins[]={1,7,10};
    int dp[100]={0};
    int t=3;
    cout<<min_coins(n,coins,t,dp);
    return 0;
}
