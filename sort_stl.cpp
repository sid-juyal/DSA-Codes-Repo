#include<iostream>
#include<algorithm>
using namespace std;
void sort_stl(int a[],int n)
{
   sort(a,a+n);
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
    sort_stl(a,n);
    cout<<"The sorted array is"<<endl;
    for(int c=0;c<n;c++)
    {

        cout<<a[c]<<endl;
    }

    return 0;
}
