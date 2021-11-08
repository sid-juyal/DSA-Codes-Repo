#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int a[n];
    int cumSum[1000]={0};
    cout<<"Enter the elements"<<endl;
    cin>>a[0];
    cumSum[0]=a[0];
    for (int b=1;b<n;b++)
    {
        cin>>a[b];
        cumSum[b]=cumSum[b-1]+a[b];
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
           currentSum=cumSum[j]-cumSum[i-1];

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
