#include<bits/stdc++.h>
using namespace std;
//Recursion + memoisation
int fib(int n, int dp[])
{
    if(n==0 || n==1)
    {
        return n;
    }
    //Recursive lookup
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int ans;
    ans=fib(n-1,dp)+fib(n-2,dp);
    return dp[n]=ans;
}
int main()
{
    int n;
    cin>>n;
    int dp[1000]={0};
    int k=fib(n,dp);
    cout<<"Ans :"<<k;
    return 0;
}
