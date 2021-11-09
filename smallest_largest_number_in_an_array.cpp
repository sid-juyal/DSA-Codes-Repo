#include<iostream>
#include<climits>
using namespace std;
int smallest_largest_number_in_array(int a[],int n)
{
    int largest= INT_MIN;
    int smallest= INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    cout<<"The largest number is "<<largest<<endl;
    cout<<"The smallest number is "<<smallest;
}
int main()
{
    int n;
    cout<<"Enter the total number of elements in your data:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for (int b=0;b<n;b++)
    {
        cin>>a[b];
    }
    smallest_largest_number_in_array(a,n);

    return 0;
}
