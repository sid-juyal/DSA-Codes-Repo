#include<iostream>
using namespace std;
//Function returns strings when numbers are represented as alphabets(like 1-A,2-B,3-C......z-26)
//Example: 1234 can be taken as:- (1234)=ABCD or (12)34=LCD [L=12] or 1(23)4=AWD [W=23]
void generate_strings(char *in,char *out,int i,int j)
{
    //base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    //rec case

    //one digit at a time
    int first_digit=in[i]-'0';
    char ch=first_digit+'A'-1;
    if(first_digit!=0)
    {
        out[j]=ch;
        generate_strings(in,out,i+1,j+1);
    }

    //two digit at a time
    if(in[i+1]!='\0')
    {
        int second_digit=in[i+1]-'0';
        int num=(first_digit*10) + second_digit;
        if(num<=26 && num>=10)
        {
            ch=num+'A'-1;
            out[j]=ch;
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
