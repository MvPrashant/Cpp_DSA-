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
void Append(Array *arr,int x)
{
    if(arr->length <=arr->size)
       arr->A[arr->length++] =x;


}
int main()
{
   Array arr={{2,3,4,5,6},10,5};
    
   Append(&arr,10); 
   Display(arr);


return 0;
}