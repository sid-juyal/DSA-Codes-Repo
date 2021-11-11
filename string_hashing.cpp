#include<bits/stdc++.h>
using namespace std;
#define int long long int

int hash_string(string s)
{
    int p=31,m=1e9+7;
    int power=1;
    int hashed=0;
    for(int i=0;i<s.size();i++)
    {
        hashed+=(power*(s[i]-'a'+1));
        power*=p;
        power%=m;
        hashed%=m;
    }
    return hashed;
}

int32_t main()
{
    string s="ababab";
    int num_hash=hash_string(s);
    cout<<num_hash;
    return 0;
}
