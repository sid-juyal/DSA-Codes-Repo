#include<iostream>
using namespace std;

void spiralprint(int a[][100], int m, int n)
{
    int sr=0;
    int sc=0;
    int er=m-1;
    int ec=n-1;
    while(sr<=er && sc<=ec)
    {
        for(int i=sc;i<=ec;i++)
        {
            cout<<a[sr][i]<<", ";
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            cout<<a[i][ec]<<", ";
        }
        ec--;
        if(er>=sr){
        for(int i=ec;i>=sc;i--)
        {
            cout<<a[er][i]<<", ";
        }
        er--;
        }
        if(ec>=sc){
        for(int i=er;i>=sr;i--)
        {
            cout<<a[i][sc]<<", ";
        }
        sc++;
        }

    }
}


int main()
{
    int a[100][100]={0};
    int m,n;
    cin>>m>>n;
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
           cin>>a[row][col];
        }
    }
    spiralprint(a,m,n);
	cout << "END";
  return 0;
}
