#include<stdio.h>
#include<stdlib.h>
struct Stack{
    int size,top;
    int *s;
};
void create(struct Stack *st)
{
    printf("Enter Size :");
    scanf("%d",&st->size);
    st->top = -1;
    st->s=(int *)malloc(st->size*sizeof(int));
}
void display(struct Stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
      printf("%d ",st.s[i]);
    printf("\n"); 
}
void push(struct Stack *st,int x)
{
   if(st->top == st->size-1)
     printf("Stack Overflow\n");
   else
   {
       st->top++; 
       st->s[st->top]= x;
   }  
}
int pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)printf("Stack Underflow\n");
    else
    {
        x=st->s[st->top--];
    }
    return x;
}
int peek(struct Stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)printf("Invalid index\n");
    else x=st.s[st.top-index+1];
    return x;
}
int isEmpty(struct Stack st)
{
    
    if(st.top==-1)return 1;
    return 0;    
}
int isFull(struct Stack st)
{
    return st.top==st.size-1;
}
int stackTop(struct Stack st)
{
    if(!isEmpty(st))return st.s[st.top];
    return -1;
}
int main()
{
     struct Stack st;
     create(&st);
   // Enter Size :5
     push(&st,10);
     push(&st,20);
     push(&st,30);
     push(&st,40);
     push(&st,50);
     push(&st,60);//Stack Overflow

     printf("Peek :%d\n",peek(st,3));
     printf("StackTop: %d\n",stackTop(st));

            
     display(st);// 50 40 30 20 10
     pop(&st);
     pop(&st);
     display(st);// 30 20 10
     printf("StackTop: %d\n",stackTop(st));

}