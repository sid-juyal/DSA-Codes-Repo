#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insert(node*&head,int data)
{
    node*n=new node(data);
    node*temp=head;
    n->next=head;
    if(temp!=NULL)
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    else
    {
        n->next=n;
    }
    head=n;
}
node*get_head(node*head,int data)
{
    node*temp=head;
    while(temp->next!=head)
    {
        if(temp->data==data)
        {
            return temp;
        }
        temp=temp->next;
    }
    if(temp->data==data)
    {
        return temp;
    }
    return NULL;
}
void deleteNode(node*&head,int data)
{
    node*del=get_head(head,data);
    if(del==NULL)
    {
        return;
    }
    if(head==del)
    {
        head=head->next;
    }
    node*temp=head;
    while(temp->next!=del)
    {
        temp=temp->next;
    }
    temp->next=del->next;
    delete del;
}
void print(node*head)
{
    node*temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
    return;
}
int main()
{
    node*head=NULL;
    insert(head,10);
    insert(head,30);
    insert(head,50);
    insert(head,70);
    insert(head,90);
    print(head);
    deleteNode(head,70);
    print(head);
    deleteNode(head,30);
    print(head);
    return 0;
}
