#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
}*first=NULL;

void Create(int A[],int n)
{
    Node *t,*last;

    first =new Node;
    first->data = A[0];
    first->prev =first->next = NULL;
    last =first;

    for(int i=1; i<n; i++)
    {
        t=new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last=t;
    }

}
void Display(Node *P)
{
    while(P)
    {
        cout<<P->data<<"->";
        P=P->next;
    }
 cout<<"\n";
}
int length(Node *P)
{
    int l=0;
    while(P)
    {
        l++;
        P=P->next;
    }
return l;
}
void Insert(Node *P,int index,int x)
{
    Node *t=new Node;
    t->data=x;
    if(index <0 || index >length(P))
    { 
        cout<<"Invalid Input";
        return;
    }
    if(index==0)
    {
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
          P=P->next;
        t->next=P->next; 
        t->prev=P;
        
        if(P->next) P->next->prev=t;

        P->next=t;
    }

}
int main()
{
    int A[]={1,2,3,4,5,6};
    Create(A,6);
    cout<<"Length of LL = "<<length(first)<<"\n";
     Insert(first,3,10);
     Display(first);


}