
#include<iostream>
using namespace std;

class Queue{
    int size,front,rear;
    int *Q;
    public:
    Queue(int size)
    {
        this->size = size;
        front=rear=0;
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
    if((rear+1)%size==front)return true;
    return false;
}  
void Queue::enqueue(int x)
{
    if(isFull())
     cout<<"Queue is full!\n";
    else{
        rear=(rear+1)%size;
        Q[rear]=x;
    } 
}
int Queue::dequeue(){
    int x=-1;
    if(isEmpty())cout<<"Queue is Empty!\n";
    else{
        front=(front+1)%size;
        x=Q[front];
    }
    return x;
}
void Queue::display()
{
    int i=front+1;
    do{
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);   
    cout<<"\n";
}
int main()
{
    int A[]={1,2,3,4,5};
    int length=sizeof(A)/sizeof(A[0]);
    Queue q(length+1);

    for(int i=0;i<length;i++)
      q.enqueue(A[i]);

    // Display
    q.display();
 
    // Overflow
    q.enqueue(10);
 
    
    // Dequeue
    for (int i=0; i<length; i++)
       cout<<q.dequeue();
    cout<<"\n";
 
    // Underflow
    q.dequeue();
    
    return 0;  


}