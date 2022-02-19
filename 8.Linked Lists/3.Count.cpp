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
int RecursiveCount(Node *P){
    if(P==NULL) return 0;
    else return RecursiveCount(P->next)+1;     
}

int main()
{
   int A[]={1,2,3,4,5,6,7,8,9};
   int size=sizeof(A)/sizeof(A[0]);
   
   Create(A,size);
   cout<<count(Head);  
   cout<<"\n";
   cout<<RecursiveCount(Head);   

    return 0;
}