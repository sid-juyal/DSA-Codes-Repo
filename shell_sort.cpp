#include<iostream>
using namespace std;
void shell_sort(int *a,int n)
{
    for(int gap=n/2;gap>=1;gap/=2)
    {
        for(int j=gap;j<=n;j++)
        {
            for(int i=j-gap;i>=0;i-gap)
            {
                if(a[i+gap]>a[i])
                {
                    break;
                }
                else
                {
                    swap(a[i+gap],a[i]);
                }
            }
        }
    }
    swap(a[0],a[1]);
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
    shell_sort(a,n);
    cout<<"The sorted array is:"<<endl;
    for(int c=0;c<n;c++)
    {
        cout<<a[c]<<endl;
    }
    return 0;
}
