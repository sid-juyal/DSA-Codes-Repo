#include<iostream>
using namespace std;
void max_sum(int arr[][100],int n,int m)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            arr[i][j]+=arr[i][j+1];
        }
    }
     for(int i=m-1;i>=0;i--)
    {
        for(int j=n-2;j>=0;j--)
        {
            arr[j][i]+=arr[j+1][i];
        }
    }
    int result=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            result=max(result,arr[i][j]);
        }
    }
    cout<<"Maximum sum of any sub-matrices is = "<<result;

}
int main()
{
    int n,m;
    cout<<"Enter size of matrix"<<endl;
    cin>>n>>m;
    int arr[100][100];
    cout<<"Enter the elements of matrices"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    max_sum(arr,n,m);
    return 0;

}
