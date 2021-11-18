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
int length(node*head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
void insertAtTail(node*&head,int data)
{
    if(head==NULL)
    {
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}
void insertAtMiddle(node*&head,int data,int p)
{
    if(head==NULL || p==0)
    {
        insertAtHead(head,data);
    }
    else if(p>length(head))
    {
        insertAtTail(head,data);
    }
    else
    {
        int jump=1;
        node*temp=head;
        while(jump<=p-1)
        {
            temp=temp->next;
            jump++;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
void DeleteHead(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
}
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
bool search(node*head,int key)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    node*head=NULL;
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,5);
    insertAtHead(head,4);
    print(head);
    cout<<endl;
    insertAtMiddle(head,3,3);
    insertAtTail(head,0);
    print(head);
    cout<<endl;
    DeleteHead(head);
    print(head);
    cout<<endl;
    int key;
    cin>>key;
    if(search(head,key))
    {
        cout<<"Element found.";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}
