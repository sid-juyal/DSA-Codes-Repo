#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int row=0;row<n;row++)
	{
	   int sc=0;
	   int ec=n-1;
	   while(ec>sc)
	   {
		  swap(a[row][sc],a[row][ec]);
		  sc++;
		  ec--;
	   }
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>i)
			{
				swap(a[i][j],a[j][i]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}



	return 0;
}
