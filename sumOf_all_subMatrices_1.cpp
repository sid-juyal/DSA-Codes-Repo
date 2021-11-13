#include<iostream>
using namespace std;
void sum(int a[][100],int n)
{
    int sum=0;
    for(int li=0;li<n;li++)
    {
        for(int lj=0;lj<n;lj++)
        {
            for(int bi=li;bi<n;bi++)
            {
                for(int bj=lj;bj<n;bj++)
                {
                    for(int i=li;i<=bi;i++)
                    {
                        for(int j=lj;j<=bj;j++)
                        {
                            sum+=a[i][j];
                        }
                    }
                }
            }
        }
    }
    cout<<"Sum of all possible sub-matrices is = "<<sum;
}
int main()
{
    int a[100][100];
    int n;
    cout<<"Enter size of square matrix"<<endl;
    cin>>n;
    cout<<"Enter the elements of matrices"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    sum(a,n);
    return 0;

}

