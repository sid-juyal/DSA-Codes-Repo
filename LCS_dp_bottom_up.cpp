#include<bits/stdc++.h>
using namespace std;

int LCS(int x,int y,string s1,string s2)
{
    vector<vector<int>>dp(x+1,vector<int>(y+1,0));
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    // print the LCS string
    vector<char>result;
    int m=s1.length();
    int n=s2.length();
    while(m!=0 && n!=0)
    {
        if(dp[m][n]==dp[m-1][n])
        {
            m--;
        }
        else if(dp[m][n]==dp[m][n-1])
        {
            n--;
        }
        else
        {
            result.push_back(s1[m-1]);
            m--;
            n--;
        }
    }
    reverse(result.begin(),result.end());
    for(char x:result)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return dp[x][y];
}

int main()
{
    string s1="ABCD";
    string s2="ABEDG";
    int n1=s1.length();
    int n2=s2.length();
    cout<<LCS(n1,n2,s1,s2);

    return 0;
}
