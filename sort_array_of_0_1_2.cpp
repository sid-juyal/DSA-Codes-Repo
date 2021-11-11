#include<iostream>
using namespace std;
//This code sorts an array of 0's,1's and 2's in O(n) time.
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    int m=0;
    int h=n-1;
    while(m<=h)
    {
        if(a[m]==0)
        {
            swap(a[l],a[m]);
            m++;
            l++;
        }
        else if(a[m]==1)
        {
            m++;
        }
        else
        {
            swap(a[m],a[h]);
            h--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
