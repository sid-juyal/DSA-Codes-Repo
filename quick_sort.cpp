#include<iostream>
using namespace std;
int partition_array(int *a,int s,int e)
{
    int i=s-1;
    int j=s;
    int pivot=a[e];
    for(;j<=e-1;)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quick_sort(int *a,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition_array(a,s,e);
    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to sort:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for (int b=0;b<n;b++)
    {
        cin>>a[b];
    }
    quick_sort(a,0,n-1);
    cout<<"The sorted array is:"<<endl;
    for(int c=0;c<n;c++)
    {
        cout<<a[c]<<endl;
    }
    return 0;
}
