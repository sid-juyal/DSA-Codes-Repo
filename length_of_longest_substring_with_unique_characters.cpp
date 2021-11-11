#include<bits/stdc++.h>
using namespace std;
//This code gives the length of the longest substring with unique characters.
// ex: abcdefgh = 8
// ex: geeksforgeeks = 7
// ex: aewergrththy = 4
// ex: abababcdefababcdab = 6
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int max_len=0;
	    int cnt=1;
	    set<int>q;
	    q.insert(s[0]);
	    int j=0;
	    int k=0;
	    for(int i=1;i<s.length();i++)
	    {
	        //element found in set.
	        if(q.find(s[i])!=q.end())
	        {
	            max_len=max(max_len,cnt);
	            q.clear();
	            while(j<i)
	            {
	                if(s[j]==s[i])
	                {
	                    k=j;
	                    break;
	                }
	                j++;
	            }
	            j++;
	            cnt=i-k;
	            for(int m=k+1;m<=i;m++)
	            {
	                q.insert(s[m]);
	            }
	        }
	        else
	        {
	            cnt++;
	            q.insert(s[i]);
	            max_len=max(max_len,cnt);
	        }
	    }
	    cout<<max_len<<endl;
	}
	return 0;
}
