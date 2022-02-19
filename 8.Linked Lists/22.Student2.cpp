#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
}*first=NULL,*second=NULL;
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
void Create(int A[],int size)
{
   second=new Node;
   second->data=A[0];
   second->next=NULL;

   Node *Temp;
   Node *Last;
   Last=second;

   for(int i=1;i<size;i++)
   {
       Temp=new Node;
       Temp->data=A[i];
       Temp->next=NULL;

       Last->next=Temp;
       Last=Temp;
   }
}
void Display(Node *P)
{
    
   while(P!=NULL)
   {
       cout<<P->data<<"->";
       P=P->next;       
       
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
int Intersection()
{
    Node *P=first;
    
    while(P!=NULL)
    {
        push(&stk,P);
        P=P->next;
    }
      
    

}

int main()
{
   int A[]={1,2,3,4,9,16,17};
   int B[]={5,6,7,9,16,17};
   int size=sizeof(A)/sizeof(A[0]);
   int sizeB=sizeof(A)/sizeof(A[0]);
   
   Create(A,size);
   Create(B,sizeB);  
   cout<<"\n";
   cout<<Intersection();   

    return 0;
}