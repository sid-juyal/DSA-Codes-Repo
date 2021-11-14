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
int main()
{
    int n=5;
    int i;
    //cin>>i;
    //clearBIT(n,i);
    //cout<<n<<endl;
    //cout<<isODD(n)<<endl;
    //cout<<getBIT(n,i)<<endl;
    //cout<<setBIT(n,i)<<endl;
    updateBIT(n,2,0);
    updateBIT(n,3,1);
    cout<<endl<<"Ans: "<<n<<endl;
}
