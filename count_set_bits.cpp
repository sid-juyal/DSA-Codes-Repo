#include<iostream>
using namespace std;
//This functions counts the number of set bits in a number.(bits that are 1). eg: 5=101 has 2 set bits.
int count_set_bits(int n)
{
    int ans=0;
    while(n>0)
    {
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
}
//This is the second method to calculate the number of set bits in a number.
int second_method(int n)
{
    int ans=0;
    while(n>0)
    {
        n=n&(n-1);
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<"The number of set bits in the number "<<n<<" is: "<<count_set_bits(n)<<endl;
    cout<<"The number of set bits in the number by FASTER method "<<"is: "<<second_method(n)<<endl;
    cout<<"The number of set bits in the number by in built function "<<"is: "<<__builtin_popcount(n)<<endl;
    return 0;
}
