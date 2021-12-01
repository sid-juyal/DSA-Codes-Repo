#include<bits/stdc++.h>
using namespace std;
int currency_change(int *coins,int n,int money)
{
    int ans=0;
    while(money>0)
    {
        int idx=upper_bound(coins,coins+n,money)-1-coins;
        cout<<coins[idx]<<" + ";
        money-=coins[idx];
        ans++;
    }
    cout<<endl;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int coins[]={1,2,5,10,20,50,100,200,500,1000};
    int t=sizeof(coins)/sizeof(int);
    int result=currency_change(coins,t,n);
    cout<<"Minimum number of coins required are: "<<result;
    return 0;
}
