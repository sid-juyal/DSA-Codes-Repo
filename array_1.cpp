#include<iostream>
using namespace std;
int main()
{
    //to check the possible pairs whose sum is 10.
    //array should be sorted.
    int a[]={-4,-1,0,1,3,5,7,10,13};
    int s=10;
    int i=0;
    int j=(sizeof(a)/sizeof(a[0]))-1;
    while(i<j)
    {
        int current_sum=a[i]+a[j];
        if(current_sum>s)
        {
            j--;
        }
        else if(current_sum<s)
        {
            i++;
        }
        else if(current_sum==s)
        {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
    return 0;
}
