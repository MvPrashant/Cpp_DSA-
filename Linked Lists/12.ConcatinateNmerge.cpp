#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
}*first=NULL,*second=NULL,*third=NULL;

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
void Create2(int B[],int size)
{
   second=new Node;
   second->data=B[0];
   second->next=NULL;

   Node *Temp;
   Node *Last;
   Last=second;

   for(int i=1;i<size;i++)
   {
       Temp=new Node;
       Temp->data=B[i];
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
void Concat(Node *P,Node *Q)
{
    third=P;
    while(P->next!=NULL)
      P= P->next;
    P->next=Q;  

}
void Merge(Node *P,Node *Q)
{
    Node *Last=new Node;

    
    if(P->data<Q->data)//first node is necessary to find or else where did u add next
    {
        third=Last=P;
        P=P->next;
        third->next=NULL;
    }
    else
    {
        third=Last=Q;
        Q=Q->next;
        third->next=NULL;        
    }
    while(P && Q)
    {
        if(P->data<Q->data)
        {
           Last->next=P;
           Last=P;
           P=P->next;
           Last->next=NULL;
        }
        else
        {
           Last->next=Q;
           Last=Q;
           Q=Q->next;
           Last->next=NULL;
        }
    }
    if(P)Last->next=P;
    if(Q)Last->next=Q;


}


int main()
{
   int A[]={2,4,6,8,10};
   int B[]={5,232,234,645,777,789};
   int size=sizeof(A)/sizeof(A[0]);
  
   Create(A,size);
   Create2(B,size);

   
   Display(first);
   cout<<"\n";
   Display(second);
   cout<<"\n";
   //Concat(first,second);
   Merge(first,second);
   Display(third);
   
       return 0;
}