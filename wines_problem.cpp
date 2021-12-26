#include<bits/stdc++.h>
using namespace std;
int profit(int wines[],int i, int j, int y)
{
    if(i>j)
    {
        return 0;
    }
    int op1=wines[i]*y + profit(wines,i+1,j,y+1);
    int op2=wines[j]*y + profit(wines,i,j-1,y+1);
    return max(op1,op2);
}
int main()
{
    int wines[]={2,3,5,1,4};
    int n=5;
    int y=1;
    cout<<profit(wines,0,n-1,y);
    return 0;
}
