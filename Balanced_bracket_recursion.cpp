#include<iostream>
using namespace std;

void Balanced_Parenthesis_Recursion(char *out,int n,int index,int open,int close)
{
    if(index==2*n)
    {
        out[index]='\0';
        cout<<out<<endl;
        return;
    }
    if(open<n)
    {
        out[index]='(';
        Balanced_Parenthesis_Recursion(out,n,index+1,open+1,close);
    }
    if(close<open)
    {
        out[index]=')';
        Balanced_Parenthesis_Recursion(out,n,index+1,open,close+1);
    }
    return;
}



int main()
{
    int n;
    cin>>n;
    char out[1000];

    Balanced_Parenthesis_Recursion(out,n,0,0,0);

    return 0;
}
