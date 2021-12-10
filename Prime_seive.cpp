#include<bits/stdc++.h>
using namespace std;
//Generate an array containing prime number
void prime_seive(int *p,int n)
{
    //first mark all odd numbers as prime
    for(long long int i=3;i<=n;i+=2)
    {
        p[i]=1;
    }
    //seive
    for(long long int i=3;i<=n;i++)
    {
        //if the current number is not marked(it is prime)
        if(p[i]==1)
        {
            for(long long int j=i*i;j<=n;j=j+i)
            {
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[0]=p[1]=0;
}
int main()
{
    int n;
    cin>>n;
    int p[n]={0};
    prime_seive(p,n);
    for(long long int i=0;i<=n;i++)
    {
        if(p[i]==1)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
