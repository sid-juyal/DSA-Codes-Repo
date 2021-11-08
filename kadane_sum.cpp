#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int a[n];
    int currentSum=0;
    int maxSum=0;
    cout<<"Enter the elements"<<endl;
    for (int b=0;b<n;b++)
    {
        cin>>a[b];
    }
   for(int i=0;i<n;i++)
   {
       currentSum=currentSum+a[i];
       if(currentSum<0)
       {
           currentSum=0;
       }
       maxSum=max(currentSum,maxSum);
       if(currentSum>maxSum)
       {
           maxSum=currentSum;
       }
   }
    cout<<"The maximum sum of any sub-array is = :"<<maxSum<<endl;
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i= 0 ; i < n ; i++)
    cin >> a[i];
    int maxSum = a[0], curr = a[0] ,s = 0 , e = 0 ;
    for(int i = 1 ; i < n ; i++){
        if(curr < 0 ){
            curr = 0 ;
            s = i;
        }
        curr+= a[i];
        if(curr > maxSum){
            e= i;
            maxSum = curr;
        }
    }
    cout <<"Starting and end "<< s << " "<< e<<"\n";
    cout <<"SUM "<< maxSum;
}
*/
