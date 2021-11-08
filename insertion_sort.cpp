#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
   for(int i=1;i<=n-1;i++)
   {
       int key=a[i];
       int j=i-1;
       while(j>=0 && a[j]>key)
       {
          a[j+1]=a[j];
          j--;
       }
       a[j+1]= key;
   }
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to sort"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for (int b=0;b<n;b++)
    {
        cin>>a[b];
    }
    insertion_sort(a,n);
    cout<<"The sorted array is"<<endl;
    for(int c=0;c<n;c++)
    {

        cout<<a[c]<<endl;
    }

    return 0;
}
