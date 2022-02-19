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
        t->next =first;
        t->prev = last;
        last->next = t;
        last=t;
    }

}
void Display(Node *P)
{
   do
    {
        cout<<P->data<<"->";
        P=P->next;
    }while(P!=first);
 cout<<"\n";
}
int length(Node *P)
{
    int l=0;
    do
    {
        l++;
        P=P->next;
    }while(P!=first);
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
        //from t
        t->next=first;
        t->prev=first->prev;
        
        //to t 
        first->prev=t;
        t->prev->next=t;//last node = t;
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
int Delete(Node *P,int index)
{
    
    int x=-1;
    
    if(index <0 || index >length(P))
    { 
        cout<<"Invalid Input";
        return x;
    }
    
    if(index == 0)
    {
       x=P->data;
       P->next->prev=P->prev;
       P->prev->next=P->next;
       first=P->next;
    delete P;

    }
    return x;
}
int main()
{
    int A[]={1,2,3,4,5,6};
    Create(A,6);
     Display(first);
     Insert(first,3,9);//(f,index,val) index= 0,1,2,3....
     Display(first);
     cout<<Delete(first,0)<<"\n";
     Display(first);



}
