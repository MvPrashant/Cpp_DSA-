#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
}*Head=NULL;
void Create(int A[],int size)
{
   Head=new Node;
   Head->data=A[0];
   Head->next=NULL;

   Node *Temp;
   Node *Last;
   Last=Head;

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
Node* Search(Node *P,int key)
{
    while(P!=NULL)
    {
        if(key==P->data)
            return P;
         P=P->next;
    }
    return NULL;

}
Node* RecursiveSearch(Node *P,int key)
{
    if(P==NULL)return NULL;
    if(key==P->data)return P;

    return RecursiveSearch(P->next,key);
}
Node * MovetoFront(Node *P,int key)
{
    Node *Q;
   while(P)
   {

    if(key==P->data)
    {
       Q->next=P->next;
       P->next=Head;
       Head=P;
       return P;
    }
    Q=P;
    P=P->next;
   }
   return NULL;
}

int main()
{
   int A[]={1,2,6,4,5};
   int size=sizeof(A)/sizeof(A[0]);
   int key=6;
  // cin>>key;

   Create(A,size);
   Display(Head);
   cout<<"\n";
   Node *R=Search(Head,key);  
   if(R)
   cout<<"Key is Found "<<R->data;
   else
   cout<<"Key is NotFound ";

   cout<<"\n";
   Node *W=RecursiveSearch(Head,key);   
   if(W)
   cout<<"Key is Found "<<W->data;
   else
   cout<<"Key is NotFound ";
   
   cout<<"\n";
   Node *K=MovetoFront(Head,key);   
   if(K)
   cout<<"Key is Found "<<K->data;
   else
   cout<<"Key is NotFound ";
   cout<<"\n";

   Display(Head);




    return 0;
}