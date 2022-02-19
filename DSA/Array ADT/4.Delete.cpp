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
int Delete(Array *arr,int index)
{
   int x=0;
   if(index>=0 && index<arr->length)
   {
      x=arr->A[index];

      for(int i=index;i<arr->length-1;i++)
       arr->A[i]=arr->A[i+1];
      arr->length--;
      return x;
   }


   return 0;   
}
int main()
{
   Array arr={{2,3,4,5,6},10,5};
    
   cout<<endl<<Delete(&arr,0); 
   Display(arr);


return 0;
}