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
void RemoveDublicates(Node * P)
{
    //time taken 
    if(P==NULL)
    {
        cout<<"No Node in LinkedList";
        return;
    }
    else
    {
        int x;
        Node * Q=P->next;
        while(Q!=NULL)
        {
            if(P->data!=Q->data)
            {
                P=Q;
                Q=Q->next;
            }
           else
           {
               P->next=Q->next;
               delete Q;
               Q=P->next;
           }  
        }
     }
     
}
     
int main()
{
   int A[]={2,4,4,5,5};
   int size=sizeof(A)/sizeof(A[0]);
  
   Create(A,size);
   RemoveDublicates(first);
   
   Display(first); 
   
       return 0;
}