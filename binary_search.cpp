#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key)
{
    //f=first element and l=last element.
    int f=0;
    int l=n-1;
    while(l>f)
    {
        int mid=(f+l)/2;
        if(a[mid]==key)
         {
            return mid;
         }
        else if(a[mid]>key)
         {
            l=mid-1;
         }

        else if(a[mid]<key)
         {
            f=mid+1;
         }

    }
    return (-1);
}
int main()
{
    int n;
    int key;
    cout<<"Enter the total number of elements in your data:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for (int b=0;b<n;b++)
    {
        cin>>a[b];
    }
    cout<<"Enter the number you want to search"<<endl;
    cin>>key;
    int k=binary_search(a,n,key);
    if(k==-1)
    {
        cout<<"The given number is not present in the data";
    }
    else
    {
        cout<<"The given number is present in the data at position= "<<k+1;
    }

    return 0;
}
