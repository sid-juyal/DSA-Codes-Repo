#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	return b==0?a:gcd(b,a%b);
}
int main() {
	int n1,n2;
	cin>>n1>>n2;
	int GCD=gcd(n1,n2);
	cout<<"GCD = "<<GCD<<endl;
	cout<<"LCM = "<<(n1*n2)/GCD<<endl;
	return 0;
}
