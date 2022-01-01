#include<bits/stdc++.h>
using namespace std;
int min_cost(int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=cost[0][0];
            }
            else if(i==0)
            {
                dp[i][j]=dp[0][j-1]+cost[0][j];
            }
            else if(j==0)
            {
                dp[i][j]=dp[i-1][0]+cost[i][0];
            }
            else
            {
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+cost[i][j];
            }
        }
    }
    return dp[r-1][c-1];
}
// for number of paths you can you Permutation and combinations. O(N) Linear times
// but applicable only if cells are not blocked
// ans would be: (m-1+n-1)!/(m-1)!(n-1)!
int num_of_paths(int r, int c)
{
    // Rat type i.e. one step at a time
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 && j==0)
            {
                dp[i][j]=1;
            }
            else if(i==0)
            {
                dp[i][j]=1;
            }
            else if(j==0)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    return dp[r-1][c-1];
}
int main()
{

    return 0;
}
