#include<bits/stdc++.h>
using namespace std;
//For this question the array should be sorted first.
int main(){
  int n,m,x,i,j;
  cout<<"Enter the number of rows and columns";
  cin>>n>>m;
  int arr[n][m];
  cout<<"Enter elements of the array";
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          cin>>arr[i][j];
      }
  }
  cout<<"Enter the key you want to search";
  cin>>x;
  i=n-1;j=0;
  bool b=false;
  while(i>=0 && j<m){
    if(arr[i][j]==x)
       {
         b=true;
         break;
       }
       else if(arr[i][j]>x){
         i--;
       }
       else{
         j++;
       }

  }
  cout<<(b?"found":"not found")<<endl;
}
