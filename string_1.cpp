#include<iostream>
#include<cstring>
using namespace std;
//Removes the duplicate letters in the strings.
//sssssoooonnaaallllllii beomes sonali
void duplicate(char a[])
{
    int l=strlen(a);
    if(l==0 || l==1)
    {
        return;
    }
    int b=0;
    for(int c=1;c<l;c++)
    {
        if(a[c]!=a[b])
        {
            b++;
            a[b]=a[c];
        }
    }
    a[b+1]='\0';
    return;
}


int main()
{
   char a[100];
   cout<<"Enter the string"<<endl;
   cin.getline(a,100);
   duplicate(a);
   cout<<a;
   return 0;
}

