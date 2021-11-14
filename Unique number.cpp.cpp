#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans=ans^x;
    }
    cout<<ans<<endl;
}

// Bitwise XOR function to find the unique the number in a list of number (ie number that occurs exactly once.)

// example: 1 2 3 4 2 3 1
// ans= 4
