#include<iostream>
using namespace std;

class Queue{
    int size,front,rear;
    int *Q;
    public:
    Queue(int size)
    {
        this->size = size;
        front=rear=-1;
        Q = new int[size];
    }
    ~Queue(){delete []Q;}
     bool isFull();
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    void display();

};
bool Queue::isEmpty(){
    if(front ==rear)return true;
    return false;
}
bool Queue::isFull(){
    if(rear==size-1)return true;
    return false;
}  
void Queue::enqueue(int x)
{
    if(rear==size-1)
     cout<<"Queue is full!\n";
    else{
        rear++;
        Q[rear]=x;
    } 
}
int Queue::dequeue(){
    int x=-1;
    if(front==rear)cout<<"Queue is Empty!\n";
    else{
        front++;
        x=Q[front];
    }
    return x;
}
void Queue::display(){
    for(int i=front+1; i<=rear; i++)
       cout<<Q[i]<<" ";
    cout<<"\n";
}
int main()
{
    int A[]={1,2,3,4,5};
    int length=sizeof(A)/sizeof(A[0]);
    Queue q(length);

    for(int i=0;i<length;i++)
      q.enqueue(A[i]);

    // Display
    q.display();
 
    // Overflow
    q.enqueue(10);
 
    // Dequeue
    for (int i=0; i<length; i++)
        q.dequeue();
    
 
    // Underflow
    q.dequeue();
    
    return 0;  


}