#include<iostream>
using namespace std;
//This code calculates a^n in very optimised way.
int power(int a,int n)
{
    int ans=1;
    while(n>0)
    {
        int last_digit=(n&1);
        if(last_digit)
        {
            ans=ans*a;
        }
        a=a*a;
        n=n>>1;
    }
    return ans;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<"a = "<<a<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"a^n = "<<power(a,n);
    return 0;
}
