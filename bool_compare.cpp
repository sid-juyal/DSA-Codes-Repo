#include<iostream>
#include<algorithm>
using namespace std;
//sorts in descending order.
bool compare(int a,int b)
{
    return a>b;
}
void sort_stl(int a[],int n,bool (* compare)(int,int))
{
   sort(a,a+n,compare);
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
    sort_stl(a,n,compare);
    cout<<"The sorted array is"<<endl;
    for(int c=0;c<n;c++)
    {

        cout<<a[c]<<endl;
    }

    return 0;
}
