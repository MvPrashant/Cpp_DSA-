#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
}*first=NULL;
void Create(int A[],int size)
{
   first=new Node;
   first->data=A[0];
   first->next=NULL;

   Node *Temp;
   Node *Last;
   Last=first;

   for(int i=1;i<size;i++)
   {
       Temp=new Node;
       Temp->data=A[i];
       Temp->next=NULL;

       Last->next=Temp;
       Last=Temp;
   }
}
int count(Node *P)
{
    int c=0;
    while(P!=NULL)
    {
        c++;
        P=P->next;
    }
    return c;
}
void Display(Node *P)
{
    
   while(P!=NULL)
   {
       cout<<P->data<<"->";
       P=P->next;       
       
   }
}
void Insert(Node *P,int index,int V)
{
   if(index<0 || index>count(P))
    return;
   
   Node * T=new Node;
    T->data=V;
    
    if(index==0)
    {
        T->next=first;
        first=T;
    }
    else
    {
        for(int i=0;i<index-1;i++)
         P=P->next;
         T->next=P->next;
         P->next=T;
    }

}
void InsertLast(int V)
{
   Node *t=new Node;
   t->data=V;
   t->next=NULL;

  Node *Q,*P=first;


   if(first==NULL)
     first=t;

   else
   {
       while(P->next!=NULL)
       {
         Q=P;  
         P=P->next;
       }
        Q->next=t;
   }  
}

void SortedInsertion(Node * P,int key)
{
    Node * Q=NULL;
    
    Node * T=new Node;
    T->data=key; 
    T->next=NULL;

    if(first==NULL)
     first=T; 
         
    else
    {
       while(P && P->data<key)
       {
           Q=P;  
           P=P->next;
       } 
       if(P==first)
        {
           T->next=first; 
           first=T;
        } 
        else
        {
          T->next=Q->next;
          Q->next=T; 
        }            
    }   
}   


int main()
{
   int A[]={2,4,5,6,8};
   int size=sizeof(A)/sizeof(A[0]);
  
   Create(A,size);
   InsertLast(20); //at last (value)
   SortedInsertion(first,1); //at a sorted array 
   Insert(first,5,10); //insert at any index
   Display(first);

     return 0;
}