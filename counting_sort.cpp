#include<iostream>
using namespace std;
//assume all numbers are greater than zero.
//This sorting technique is for small amount of entries and for given specific range.
void counting_sort(int *a,int n)
{
    int largest=-1;
    for(int i=0;i<n;i++)
    {
        largest=max(largest,a[i]);
    }
    int *freq=new int[largest+1]{0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(freq[i]>0)
        {
            a[j]=i;
            freq[i]--;
            j++;
        }
    }
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
    counting_sort(a,n);
    cout<<"The sorted array is:"<<endl;
    for(int c=0;c<n;c++)
    {
        cout<<a[c]<<endl;
    }
    return 0;
}
