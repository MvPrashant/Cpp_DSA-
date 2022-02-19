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
int Delete(Node *P,int Index)
{
    Node*Q=NULL;
    int x=-1;

    if(Index<1 || Index >count(P))
      return x;
    if(Index==1)
    {
        Q=first;
        x=first->data;
        first=first->next;
        delete Q;
        return x;
    }  
    else{
        for(int i=0;i<Index-1;i++)
        {
            Q=P;
            P=P->next;
        }
        Q->next=P->next;
        x=P->data;
        delete P;
        return x;
    }
}
int main()
{
   int A[]={2,4,5,6,8};
   int size=sizeof(A)/sizeof(A[0]);
  
   Create(A,size);
   Delete(first,4);
   
   Display(first); 
   
       return 0;
}