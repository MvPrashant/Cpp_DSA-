#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size,front,rear;
    int *Q;
};
void Create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));      
}
void enqueue(struct Queue *q,int x)
{
   if(q->rear==q->size-1) //if = to last index;
    printf("Queue is Full"); //isfull
   else
   {
       q->rear++;
       q->Q[q->rear]=x;
   } 
}
int dequeue(struct Queue *q)
{
   int x=-1;
   if(q->rear==q->front) //if =
    printf("Queue is Empty"); //isEmpty
   else
   {
       q->front++;
       x=q->Q[q->front];
   } 
   return x;
}
void Display(struct Queue q)
{
    for(int i=q.front+1; i<=q.rear; i++)
      printf("%d ",q.Q[i]);
    printf("\n");  
}
int main()
{
   struct Queue q;
   Create(&q,5);//5 is size of queue

   enqueue(&q,10);
   enqueue(&q,20);
   enqueue(&q,30);
   Display(q);
   printf("Deleted Element :%d\n ",dequeue(&q));
   Display(q);

}