//Remove Dublicate from Sorted
#include<iostream>
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
void ReverseElement(Node * P)
{
    //time taken 
    if(P==NULL)
    {
        cout<<"No Node in LinkedList";
        return;
    }
    int i=0,A[count(P)];
    while(P!=NULL)
    {
        A[i++]=P->data;
        P=P->next;
    }
    P=first;
    while(P!=NULL)
    {
      P->data=A[--i];
      P=P->next;
    } 
     
}
void Reverse()
{
    //Sliding Pointer 
    Node * P=first;
    Node * Q=NULL;
    Node * R=NULL;

    while(P!=NULL)
    {
        R=Q;
        Q=P;
        P=P->next;
        Q->next=R;
    }
    first=Q;

}
void RecursiveReverse(Node * Q, Node * P)
{
   if(P!=NULL)
   {
       RecursiveReverse(P,P->next);
       P->next=Q;
   }
   else
    first=Q;
}
     
int main()
{
   int A[]={1,2,3,4,5,6};
   int size=sizeof(A)/sizeof(A[0]);
  
   Create(A,size);
   Display(first); 
   //ReverseElement(first);
   //Reverse();
   RecursiveReverse(NULL,first);
   cout<<"\n";   
   Display(first); 
   
       return 0;
}