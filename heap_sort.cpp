#include<iostream>
#include<vector>
using namespace std;

bool minHeap;
bool compare(int a,int b)
{
    if(minHeap)
    {
        return a<b;
    }
    else{
        return a>b;
    }
}
void heapify(vector<int>&v,int idx,int len)
{
    int left=2*idx;
    int right=left+1;
    int min_idx=idx;
    int last=len-1;
    if(left<=last && compare(v[left],v[idx]))
    {
        min_idx=left;
    }
    if(right<=last && compare(v[right],v[min_idx]))
    {
        min_idx=right;
    }
    if(min_idx!=idx)
    {
        swap(v[idx],v[min_idx]);
        heapify(v,min_idx,len);
    }
}
void build_Heap(vector<int> &v)
{
    for(int i=(v.size()-1)/2; i>=1;i--)
    {
        heapify(v,i,v.size());
    }
}
void heapsort(vector<int> &v)
{
    build_Heap(v);
    int n=v.size();
    while(n>1)
    {
        swap(v[1],v[n-1]);
        n--;
        heapify(v,1,n);
    }
}
void print(vector<int> v)
{
    for(int x=1;x<v.size();x++)
    {
        cout<<v[x]<<" ";
    }
}

int main()
{
    vector<int> v;
    v.push_back(-1);
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    heapsort(v);
    print(v);
    return 0;
}
