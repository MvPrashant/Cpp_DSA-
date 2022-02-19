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
int isLoop(Node *f)
{
    Node *P,*Q;
    P=Q=f;
    do
    {
        P=P->next;
        Q=Q->next;
        Q=Q?Q->next:Q;/*Q aagar Q(null ni h)to thek warna 
                         Q,Q hi rahega yni null rahega*/
    }while(P && Q && P!=Q);
    return P==Q? true:false;
}

int main()
{
   Node *t1,*t2;
   int A[]={2,4,5,6,8};
   int size=sizeof(A)/sizeof(A[0]);
  
   Create(A,size);
   t1=first->next->next;
   t2=first->next->next->next->next;
   t2->next=t1;
   cout<<isLoop(first);   

     return 0;
}