#include<bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int i,int j)
{
    if(i==s1.length() || j==s2.length())
    {
        return 0;
    }
    if(s1[i]==s2[i])
    {
        return 1 + LCS(s1,s2,i+1,j+1);
    }
    int op1=LCS(s1,s2,i+1,j);
    int op2=LCS(s1,s2,i,j+1);
    return max(op1,op2);
}

int main()
{
    string s1="ABCD";
    string s2="ABEDG";
    cout<<LCS(s1,s2,0,0);

    return 0;
}
