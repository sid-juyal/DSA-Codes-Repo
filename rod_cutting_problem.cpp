#include<bits/stdc++.h>
using namespace std;
int max_profit(int price[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int cut=i+1;
        int current_ans=price[i] + max_profit(price,n-cut);
        ans=max(ans,current_ans);
    }
    return ans;
}
int bottom_up(int price[],int n)
{
    int dp[n+1];
    dp[0]=0;
    for(int len=1;len<=n;len++)
    {
        int ans=INT_MIN;
        for(int i=0;i<len;i++)
        {
            int cut=i+1;
            int curr_ans=price[i]+dp[len-cut];
            ans=max(curr_ans,ans);
        }
        dp[len]=ans;
    }
    return dp[n];
}
int main()
{
    int price[]={3,5,8,9,10,17,17,20};
    int n=8;
    cout<<max_profit(price,n)<<endl;
    cout<<bottom_up(price,n);
    return 0;
}
