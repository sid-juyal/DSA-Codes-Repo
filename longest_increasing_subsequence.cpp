#include<bits/stdc++.h>
using namespace std;
// O(N^2)
// ex: 1 5 2 3 4 9 6 10
// ans= 6; (1 2 2 3 4 5 5 6)
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int len=0;
    for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
        len=max(len,dp[i]);
    }
    cout<<endl<<"Maximum Length = "<<len;
    return 0;
}
