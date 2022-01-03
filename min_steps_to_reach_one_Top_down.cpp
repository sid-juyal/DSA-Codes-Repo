#include<bits/stdc++.h>
using namespace std;
int min_step(int n,int dp[])
{
    if(n==1)
    {
        return 0;
    }
    //look up if n is already computed
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int op1,op2,op3;
    if(n%3==0)
    {
        op1=min_step(n/3,dp)+1;
    }
    if(n%2==0)
    {
        op2=min_step(n/2,dp)+1;
    }
    else
    {
        op3=min_step(n-1,dp)+1;
    }
    int ans=min(op1,min(op2,op3));
    return dp[n]=ans;
}
int main()
{
    int n;
    cin>>n;
    int dp[1000]={0};
    cout<<min_step(n,dp);
    return 0;
}
