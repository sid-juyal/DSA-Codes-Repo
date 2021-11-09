#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_term=i;
        for(int j=i;j<=n-1;j++)
        {
            if(a[j]<a[min_term])
                min_term=j;
        }
        swap(a[i],a[min_term]);
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
    selection_sort(a,n);
    cout<<"The sorted array is"<<endl;
    for(int c=0;c<n;c++)
    {

        cout<<a[c]<<endl;
    }

    return 0;
}
