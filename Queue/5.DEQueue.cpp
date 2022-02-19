#include<iostream>
using namespace std;

class Queue
{
    int size,front,rear;
    int *Q;
    public:
    Queue(int size)
    {
        this->size = size;
        front = rear=-1;
        Q=new int[size];     
    }
    ~Queue(){delete []Q;}
    void enqueue(int x,int choice);
    int dequeue(int choice);
    void display();
};
void Queue::enqueue(int x,int choice)
{
   if(choice == 1)
   {
       if(rear==size-1)
        cout<<"Queue is full rear!\n";
       else{
        rear++;
        Q[rear]=x;
      }
   }  
   else if(choice == 2)
   {
       if(front==-1)
        cout<<"Queue is full at front!\n";
       else{
        Q[front]=x;
        front--;
      }
   } 
}
int Queue ::dequeue(int choice)
{
   int x=-1; 
   if(choice == 1)
   {
       if(rear==front)cout<<"Queue is Empty!\n";
      else{
          x=Q[rear];
          rear--;
      }
   }
   else if(choice == 2)
   {
      if(front==rear)cout<<"Queue cannot be deleted from front!\n";
      else{
          front++;
          x=Q[front];
      }
   }

   return x;
}
void Queue :: display()
{
   for(int i=front+1; i<=rear; i++)
   cout<<Q[i]<<" ";
   cout<<"\n";
}
int main()
{
    Queue q(6);
    int val,choice;
    q.enqueue(10,1);
    q.enqueue(20,1);
    q.enqueue(30,1);


    cout<<"1.enqueue\n2.dequeue\nEnter Choice(1/2):";
    cin>>choice;
    if(choice == 1)
    {
       //enqueue 
       cout<<"Enter  choice enqueue(1.Rear/2.Front) :";
       cin>>choice;
       cout<<"Enter  value :";
       cin>>val;
       q.enqueue(val,choice);
    }
    else if(choice == 2)
    {
        //dequeue
       cout<<"Enter  choice enqueue(1.Rear/2.Front) :";
       cin>>choice; 
       q.dequeue(choice);
   
    }
    else cout<<"Invalid Input";

    q.display();
   
}