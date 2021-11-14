#include<iostream>
using namespace std;
//In this approach there can be two unique numbers. So we need to print both the unique numbers.
int main()
{
    int n;
    int a[n];
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        res=res^a[i];
    }
    //res=x^y
    int temp=res;
    int pos=0;
    //loop to find the position of the first set bit
    while((temp&1)!=1)
    {
        pos++;
        temp=temp>>1;
    }
    //The first set bit in our res is at position pos.
    int mask=(1<<pos);
    int x=0;
    int y=0;
    //Iterating over the array to get the first number x that has a set bit at the same position as the term(res).
    for(int i=0;i<n;i++)
    {
        if((a[i]&mask)>0)
        {
            x=x^a[i];
        }
    }
    y=res^x;
    cout<<min(x,y)<<" "<<max(x,y)<<endl;
    return 0;
}

/*
#include<iostream>
using namespace std;
int main() {
  int n,res1;
  res1=0;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];
  res1=res1^arr[i];
  }
  int i=0;
  int temp=res1;
  while(temp>0)
  {
    if(temp&1)
    break;
    i++;
    temp=temp>>1;
  }
  int mask=(1<<i);
  int res2=0;
  for(int i=0;i<n;i++)
  {
    if((mask&arr[i])!=0)
    res2=res2^arr[i];
  }
  int nextnum=res1^res2;
  if(nextnum>res2)
  cout<<res2<<" "<<nextnum;
  else
  cout<<nextnum<<" "<<res2;
	return 0;
}

*/

