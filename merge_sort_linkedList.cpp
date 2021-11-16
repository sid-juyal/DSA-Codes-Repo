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
        if(head->data==key)
        {
            return true;
        }
        head=head->next;
    }
    return false;
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
node*mid_node(node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* merge_list(node*a,node*b)
{
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    node*c;
    if(a->data<b->data)
    {
        c=a;
        c->next=merge_list(a->next,b);
    }
    else
    {
        c=b;
        c->next=merge_list(a,b->next);
    }
}
node* MergeSort(node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node*mid=mid_node(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;
    a=MergeSort(a);
    b=MergeSort(b);
    node*c=merge_list(a,b);
}
int main()
{
    node*head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,1);
    insertAtHead(head,4);
    insertAtHead(head,45);
    insertAtHead(head,13);
    insertAtHead(head,65);
    insertAtHead(head,7);
    insertAtHead(head,55);
    insertAtHead(head,69);
    node*final=MergeSort(head);
    print(final);
    return 0;
}

