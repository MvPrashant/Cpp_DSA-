#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
}*Head;

void Create(int A[],int n)
{
    Node *t,*last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for(int i=1; i<n; i++)
    {
        t=new Node;
        t->data = A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void Display(Node *P)
{
   do
   {
       cout<<P->data<<"->";
       P=P->next;     

   } while (P!=Head);
   
}
int length(Node *P)
{
    int len = 0;
    do
    {
        len++;
        P=P->next;
    } while (P!=Head);
   return len; 
}
void insert(Node *P,int index,int x)
{
   Node *t;
   if(index<0 || index>length(P))
   {
       system("Color 0A");
       cout<<"Invalid Index\n";       
       return;
   }   

   if(index==0)
    {
        t=new Node;
        t->data =x;
        if(Head==NULL)
        {
            Head=t;
            Head->next= Head;
        }  
        else
        {
            while(P->next!=Head)P=P->next;
            P->next=t;
            t->next=Head;
            Head=t; 
        } 
    } 
    else
    {
        for(int i=0;i<index-1;i++)
          P=P->next;
        t=new Node;  
        t->data=x;  
        t->next=P->next ;
        P->next=t; 
    }   
}
int Delete(Node* P,int index)
{
    int x;
     if(index<0 || index>length(P))
   {
       cout<<"Invalid Index\n";       
       return -1;
   } 
   if(index==1)
   {
       while(P->next!=Head)P=P->next;
       x=Head->data;
       if(P==Head)//if there is only 1 node
       {
           //time taken is N
           delete Head; // in C free(Head);
           Head=NULL;
       } 
       else
       {
           P->next=Head->next;
           delete Head;
           Head=P->next;
       } 
   }  
   else
   {
       //time-min 1 for heads->next node,max N
      for(int i=0;i<index-2;i++)
       P=P->next;
      Node *Q=P->next;
      P->next=Q->next;
      x=Q->data;
      delete Q;
   }

return x;
}
int main()
{
  int A[]={1,2,3,4,5};
  Create(A,5);
  Display(Head);
  cout<<"\n";
  insert(Head,2,10);
  Display(Head);
  cout<<"\n";
  Delete(Head,5);
  Display(Head);
  cout<<"\n";
  return 0;
}