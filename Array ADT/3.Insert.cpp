#include<bits/stdc++.h>
using namespace std;

//array is created in heap
struct Array 
{
   int A[10];
   int size;
   int length;
};
void Display(Array arr)
{
   cout<<"\nElements Are :";
   for(int i=0;i<arr.length;i++)
     cout<<endl<<arr.A[i];
}
void Insert(Array *arr,int index,int x)
{
   if(index>=0 && index<=arr->length)
   {
      for(int i=arr->length;i>index;i--)
       arr->A[i] = arr->A[i-1];
       arr->A[index] = x;
       arr->length++;
   }
}
int main()
{
   Array arr={{2,3,4,5,6},10,5};

   Insert(&arr,3,25);  
   Display(arr);


return 0;
}