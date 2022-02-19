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
bool CheckSorted(Node * P)
{
    //time taken min-O(1),Max-O(n);
    if(P==NULL)
    {
        cout<<"No Node in LinkedList";
        return false;
    }
    else
    {
        int x=-32768;
        while(P!=NULL)
        {
            if(P->data<x)
             return false;
            x=P->data;
            P=P->next; 
        }
     }
     return true;
}
     
int main()
{
   int A[]={2,4,5,6,8};
   int size=sizeof(A)/sizeof(A[0]);
  
   Create(A,size);
   cout<<CheckSorted(first)<<"\n";
   
   Display(first); 
   
       return 0;
}