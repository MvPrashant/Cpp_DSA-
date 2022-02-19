#include<iostream>
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
void RDisplay(Node *P)
{
    static int f=0;
    if(P!=Head || f==0)
    {
       f=1; 
       cout<<P->data<<"->";
       RDisplay(P->next);       
    }
    f=0;
}
int main()
{
  int A[]={1,2,3,4,5};
  Create(A,5);
  RDisplay(Head);
  return 0;
}