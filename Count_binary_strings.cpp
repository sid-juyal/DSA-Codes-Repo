/*
Problem Name: Count Number of Binary Strings
Problem Difficulty: 2
Problem Constraints: 1<=t<=100
1<=n<=90
Problem Description:
You are provided an integers N. You need to count all possible distinct binary strings of length N such that there are no consecutive 1’s.


Input Format: First line contains integer t which is number of test case.
For each test case, it contains an integer n  which is the the length of Binary String.

Sample Input: 2
2
3
Output Format: Print the number of all possible binary strings.

Sample Output: 3
5
*/


//=====Solution=====
//Sanket Singh
// C++ program to count all distinct binary strings
// without two consecutive 1's
#include <iostream>
#define ll unsigned long long int
using namespace std;

ll countStrings(int n)
{
	ll a[n], b[n];
	a[0] = b[0] = 1;
	for (int i = 1; i < n; i++)
	{
		a[i] = (ll)(a[i-1] + b[i-1]);
		b[i] = (ll)a[i-1];
	}
	return (ll)(a[n-1] + b[n-1]);
}


// Driver program to test above functions
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		cout << countStrings(n) << endl;
	}
	//cout << countStrings(3) << endl;
	return 0;
}
