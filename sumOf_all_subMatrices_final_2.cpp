#include<iostream>
using namespace std;
void sum(int arr[][100],int n,int m)
{
    //tl=top left and br = bottom right
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int tl=(i+1)*(j+1);
            int br=(n-i)*(m-j);
            sum+=(tl*br)*arr[i][j];
        }
    }
    cout<<"Sum of all possible sub-matrices is = "<<sum;

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
    sum(arr,n,m);
    return 0;

}

