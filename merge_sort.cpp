#include<iostream>
using namespace std;
void merge_array(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
}
void merge_sort(int a[],int s,int e)
{
   if(s>=e)
   {
       return;
   }
   int mid=(s+e)/2;
   merge_sort(a,s,mid);
   merge_sort(a,mid+1,e);
   merge_array(a,s,e);
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
    merge_sort(a,0,n-1);
    cout<<"The sorted array is:"<<endl;
    for(int c=0;c<n;c++)
    {
        cout<<a[c]<<endl;
    }
    return 0;
}
