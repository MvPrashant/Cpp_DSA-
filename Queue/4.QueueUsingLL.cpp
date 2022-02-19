#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
    Node *t=new Node;
    if(t==NULL)cout<<"Queue is full\n";
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL)front=rear=t;
        else{
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue(){
    int x=-1;
     
    if(front==NULL)cout<<"Queue is Empty!\n";
    else{
        x=front->data;
        front=front->next;
    }
    return x;
}
void display()
{
    Node *P =front;
    while(P)
    {
        cout<<P->data<<" ";
        P=P->next;
    }
    cout<<"\n";
}
int main()
{
    int A[]={1,2,3,4,5};
    int length=sizeof(A)/sizeof(A[0]);

    for(int i=0;i<length;i++)
     enqueue(A[i]); 
      display();
 
    for (int i=0; i<length; i++)
        dequeue();
        
        dequeue(); 
 return 0;  
}