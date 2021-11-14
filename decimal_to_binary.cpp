#include<iostream>
using namespace std;
int decimal_to_binary(int n)
{
    int ans=0;
    int p=1;
    while(n>0)
    {
        int last_digit=(n&1);
        ans=ans+(last_digit*p);
        p=p*10;
        n=n>>1;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<"The binary form of number "<<n<<" is: "<<decimal_to_binary(n)<<endl;
    return 0;
}
