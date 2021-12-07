#include<bits/stdc++.h>
using namespace std;
void generate_strings(char *in,char *out,int i,int j)
{
    if(in[i]=='\0')
    {
        out[j]=='\0';
        cout<<out<<endl;
        return;
    }
    int digit=in[i]-'0';
    if(digit==0)
    {
        generate_strings(in,out,i+1,j);
    }
    char ch=digit+'A'-1;
    out[j]=ch;
    generate_strings(in,out,i+1,j+1);
    if(in[i+1]!='\0')
    {
        int next_digit=in[i+1]-'0';
        int num=(digit*10)+next_digit;
        if(num<=26)
        {
            out[j]=num+'A'-1;
            generate_strings(in,out,i+2,j+1);
        }
    }
    return;
}
int main()
{
    char in[100];
    cin>>in;
    char out[100];
    generate_strings(in,out,0,0);
    return 0;
}
/*
#include<iostream>
#include<cstring>
using namespace std;
void print(char*,char*,int,int,int);


int main() {
  char num[10];
  char outt[10];
  cin>>num;
  int len=strlen(num);
  print(num,outt,0,0,len);
	return 0;
}


void print(char* in,char* out,int i,int j,int length)
{
  if(in[i]=='\0'){
    out[j]='\0';
    cout<<out<<endl;
    return;
  }
  int sdigit=in[i]-'0';
  int ddigit;
  if(i+1<length)
  {
  //string str=in.substr(i,i+1);
  ddigit=(in[i]-'0')*10+(in[i+1]-'0');
  }
  else
  ddigit=sdigit;

    out[j]=sdigit+64;
    print(in,out,i+1,j+1,length);
    if(ddigit>9&&ddigit<=26){
      out[j]=ddigit+64;
      print(in,out,i+2,j+1,length);
    }
}*/
