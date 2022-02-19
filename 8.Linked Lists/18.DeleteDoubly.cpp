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
int Delete(Node *P,int index)
{
    int x=-1;
    
    if(index <0 || index >length(P))
    { 
        cout<<"Invalid Input";
        return x;
    }
    if(index==0)
    {
        first=first->next;
        x=P->data;
        delete P;
        if(first)first->prev=NULL;       

    }
    else
    {
        for(int i=0;i<index-1;i++)
          P=P->next;
        P->prev->next=P->next; 
               
        if(P->next)P->next->prev=P->prev;
         x=P->data;
         delete P;
    }
    return x;
}
int main()
{
    int A[]={1,2,3,4,5,6};
    Create(A,6);
    cout<<"Length of LL = "<<length(first)<<"\n";
    cout<< Delete(first,3)<<"\n";
     Display(first);


}