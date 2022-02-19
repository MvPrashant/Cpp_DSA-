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
int Max(Node *P)
{
    int max=0;
    while(P!=NULL){
        if(P->data>max)
            max=P->data;
        P=P->next;
    }
    return max;
}
int RecursiveMax(Node *P)
{
    int x=0;
    if(P==0)return 0;
    x=RecursiveMax(P->next);
    return x>P->data?x:P->data;

}
int main()
{
   int A[]={1,2,6,4,5};
   int size=sizeof(A)/sizeof(A[0]);
   
   Create(A,size);
   cout<<Max(Head);  
   cout<<"\n";
   cout<<RecursiveMax(Head);   

    return 0;
}