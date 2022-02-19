#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
}*first=NULL;

void Create(int A[],int n)
{
    Node *t,*last;

    first =new Node;
    first->data = A[0];
    first->prev =first->next = NULL;
    last =first;

    for(int i=1; i<n; i++)
    {
        t=new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last=t;
    }

}
void Display(Node *P)
{
    while(P)
    {
        cout<<P->data<<"->";
        P=P->next;
    }
 cout<<"\n";
}
int length(Node *P)
{
    int l=0;
    while(P)
    {
        l++;
        P=P->next;
    }
return l;
}
int Reverse(Node *P)
{
   Node *t;

   while(P)
   {
       t=P->next;
       P->next=P->prev;
       P->prev=t;
       P=P->prev;
       if(P && P->next==NULL)first=P;
   }

}

int main()
{
    int A[]={1,2,10,4,5,6};
    Create(A,6);
    cout<<"Length of LL = "<<length(first)<<"\n";
     Display(first);
    Reverse(first);
    cout<<"\n";
     Display(first);


}