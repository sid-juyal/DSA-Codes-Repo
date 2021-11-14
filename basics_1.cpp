#include<iostream>
using namespace std;
//tells whether a number is odd or not.
bool isODD(int n)
{
    return (n&1);
}
//gives the ith bit of the number in binary form. ex 2nd bit of 5 (101) is 1;
int getBIT(int n,int i)
{
    int mask=(1<<i);
    int bit=(n&mask)>0?1:0;
    return bit;
}
// sets the i'th bit to 1.
int setBIT(int n,int i)
{
    int mask=(1<<i);
    int ans= n | mask;
    return ans;
}
//this clears the bit at i'th place (ie, sets i'th bit value to zero)
void clearBIT(int &n,int i)
{
    int mask= ~(1<<i);
    n= n&mask;
}
void updateBIT(int &n,int i,int v)
{
    int mask= ~(1<<i);
    int clear_n=n&mask;
    n=clear_n|(v<<i);
}
// clears exactly last i bits. (ie sets last i bits to zero)
int clear_last_bits(int n,int i)
{
    int mask=(-1<<i);
    n=n&mask;
    return n;
}
int clear_bits_i_to_j(int n,int i,int j)
{
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    int ans=n&mask;
    return ans;
}
int main()
{
    int n=31;
    int i,j;
    cin>>i;
    cin>>j;
    //clearBIT(n,i);
    //cout<<n<<endl;
    //cout<<isODD(n)<<endl;
    //cout<<getBIT(n,i)<<endl;
    //cout<<setBIT(n,i)<<endl;
    //updateBIT(n,2,0);
    //updateBIT(n,3,1);
    //cout<<endl<<"Ans: "<<clear_last_bits(n,i)<<endl;
    cout<<endl<<"Ans: "<<clear_bits_i_to_j(n,i,j)<<endl;
}
