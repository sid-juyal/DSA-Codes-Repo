#include<iostream>
using namespace std;
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
    int currentSum=0;
    int maxSum=0;
    int left=-1;
    int right=-1;
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           currentSum=0;
           for(int k=i;k<=j;k++)
           {
               currentSum+=a[k];
           }
               if(currentSum>maxSum)
               {
                   maxSum=currentSum;
                   left=i;
                   right=j;
               }

       }
   }
    cout<<"The maximum sum of any sub-array is = :"<<maxSum<<endl;
    cout<<"The sub-array is:"<<endl;
    for(int l=left;l<=right;l++)
    {
        cout<<a[l]<<"; ";
    }

    return 0;
}
