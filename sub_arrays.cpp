#include<iostream>
using namespace std;

void sub_array(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           for(int k=i;k<=j;k++)
           {
               cout<<a[k];
           }
           cout<<endl;
       }
   }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for (int b=0;b<n;b++)
    {
        cin>>a[b];
    }
    cout<<"The sub-arrays are:"<<endl;
    sub_array(a,n);

    return 0;
}
