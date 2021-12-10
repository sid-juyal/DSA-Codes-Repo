#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    node* left; // for 0
    node* right; //for 1
};
class trie
{
    node *root;
public:
    trie()
    {
        root=new node();
    }
    // Insert Function
    void insert(int n)
    {
        node *temp=root;
        for(int i=31;i>=0;i--)
        {
            int bit=(n>>i)&1;
            if(bit==0)
            {
                if(temp->left==NULL)
                {
                    temp->left=new node();
                }
                temp=temp->left;
            }
            else
            {
                //bit is 1
                if(temp->right==NULL)
                {
                    temp->right=new node();
                }
                temp=temp->right;
            }
        }
    }
    //Helper function to find maximum XOR
    int max_XOR_helper(int value)
    {
        int curr_ans=0;
        node *temp=root;
        for(int j=31;j>=0;j--)
        {
            int bit=(value>>j)&1;
            if(bit==0)
            {
                if(temp->right!=NULL)
                {
                    temp=temp->right;
                    curr_ans+=(1<<j);
                }
                else
                {
                    temp=temp->left;
                }
            }
            else
            {
                if(temp->left!=NULL)
                {
                    temp=temp->left;
                    curr_ans+=(1<<j);
                }
                else
                {
                    temp=temp->right;
                }
            }
        }
        return curr_ans;
    }
    int max_xor(int *input,int n)
    {
        int max_XOR=0;
        for(int i=0;i<n;i++)
        {
            int val=input[i];
            insert(val);
            int current_XOR=max_XOR_helper(val);
            cout<<current_XOR<<" ";
            max_XOR=max(current_XOR,max_XOR);
        }
        cout<<endl;
        return max_XOR;
    }
};

int main()
{
    int input[]={3,10,5,25,2,8};
    trie t;
    cout<<t.max_xor(input,6);
    return 0;
}
