#include<bits/stdc++.h>
using namespace std;
vector<int> prime_sieve(int *p,int n)
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
    vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<=n;i++)
    {
        if(p[i]==1)
        {
            primes.push_back(i);
        }
    }
    return primes;
}
vector<int> prime_factors_factorize(int m,vector<int> &primes)
{
    vector<int> factors;
    factors.clear();
    int i=0;
    int p=primes[0];
    while(p*p<=m)
    {
        if(m%p==0)
        {
            factors.push_back(p);
            while(m%p==0)
            {
                m/=p;
            }
        }
        //go to next position
        i++;
        p=primes[i];
    }
    if(m!=1)
    {
        factors.push_back(m);
    }
    return factors;
}
int main()
{
    int N=100;
    int p[N]={0};
    vector<int> primes=prime_sieve(p,100);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> factors=prime_factors_factorize(n,primes);
        for(auto f:factors)
        {
            cout<<f<<" "<<endl;
        }
    }
    return 0;
}
