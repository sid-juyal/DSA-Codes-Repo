#include<bits/stdc++.h>
using namespace std;
// O(Nlog(N)) BEST OPTIMIZED
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
    int dp[n+1];
    dp[0]=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        dp[i]=INT_MAX;
    }
    for(int i=0;i<n;i++)
    {
        int len=upper_bound(dp,dp+n+1,a[i])-dp;
        if(dp[len-1]<a[i] && a[i]<dp[len])
        {
            dp[len]=a[i];
        }

    }
    int lis=0;
    for(int i=1;i<=n;i++)
    {
        if(dp[i]!=INT_MAX)
        {
            lis=i;
        }
    }
    cout<<endl<<"Maximum Length = "<<lis<<endl;
    return 0;
}
