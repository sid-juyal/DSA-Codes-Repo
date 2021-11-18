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
void insertAtHead(node*&head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    node*n=new node(d);
    n->next=head;
    head=n;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
void rev(node*head)
{
    node*c=head;
    node*p=NULL;
    node*n;
    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
    print(head);
}
int main()
{
    node*head=NULL;
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,5);
    insertAtHead(head,4);
    cout<<"Given Linked list"<<endl;
    print(head);
    cout<<endl;
    cout<<"The reversed linked list is:"<<endl;
    rev(head);
    cout<<endl;
    return 0;
}
