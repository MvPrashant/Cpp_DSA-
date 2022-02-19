#include<iostream>
using namespace std;
class Node{
    public:
   int data;
   Node* next;
};
class Stack
{
    Node *top;
    public:
    Stack(){top==NULL;}
    ~Stack() {
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}
    void Display();
    void push(int x);
    int pop();

};
void Stack:: push(int x){
   Node *t=new Node;
   if(t==NULL)cout<<"Stack is Full\n";
   else{
       t->data=x;
       t->next=top;
       top=t;
       }
}

int Stack::pop(){
    int x=-1;
    if(top==NULL)cout<<"Stack is Empty\n";
    else{
        x=top->data;
        Node *t=top;
        top=top->next;
        delete t;
    }
    return x;
}
void Stack::Display(){
    Node*P=top;
    while(P)
    {
        cout<<P->data<<"->";
        P=P->next;
    }
    cout<<"\n";
}
int main()
{
   Stack S;
   S.push(10);
   S.push(20);
   S.push(30);

   S.Display();

   cout<<S.pop()<<"\n";
   S.Display();
   return 0;
}