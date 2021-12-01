#include<bits/stdc++.h>
using namespace std;
//Complete the maximum number of tasks in given time.
//We sort the tasks on basis of their finish time.
//and check if the current task ka start time is greater than the finish time of previous task then execute it else no.
bool compare(pair<int,int> p1,pair<int,int>p2)
{
    return p1.second<p2.second;
}
int main()
{
    int t,n,s,e;
    cin>>t;
    vector<pair<int,int>> v;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }
        sort(v.begin(),v.end(),compare);
        int result=1;
        int finish=v[0].second;
        cout<<"The activities that are selected are : ";
        cout<<1<<" ";
        for(int i=1;i<n;i++)
        {
            if(v[i].first>=finish)
            {
                cout<<i<<" ";
                finish=v[i].second;
                result++;
            }
        }
        cout<<endl;
        cout<<"Maximum activities done are :"<<result<<endl;
        v.clear();
    }
    return 0;
}
 /*
1
9
1 3
2 5
4 7
1 8
5 9
8 10
9 11
11 14
13 16
 */
