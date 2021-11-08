#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
   for(int i=1;i<=n-1;i++)
   {
      for(int j=0;j<=(n-i-1);j++)
      {
          if(a[j]>a[j+1])
          {
              swap(a[j],a[j+1]);
          }
      }
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
    bubble_sort(a,n);
    cout<<"The sorted array is"<<endl;
    for(int c=0;c<n;c++)
    {

        cout<<a[c]<<endl;
    }

    return 0;
}
