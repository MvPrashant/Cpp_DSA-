#include<iostream>
using namespace std;

class Node {
   public:
   char data;
   Node *next;
};
class Stack{
  Node *top;
  public:
  Stack(){ top==NULL; }
  void push(char ch);
  char pop();
};
void push(char ch)
{
   Node *t=new Node();
   if(t==NULL)cout<<"OverFlow of Stack";
   else{ 
       t->data=ch;
       
   }
}

int main()
{
   char *exp="((a+b)*(c-d))";
}