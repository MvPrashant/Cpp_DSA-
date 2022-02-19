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
void InsertSort(Array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)return;

    while(i>=0 &&arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;

}
int isSorted(Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
       if(arr.A[i]>arr.A[i+1])
       return 0;
    }
    return 1;
}



int main()
{
    Array arr={{2,3,1,25,26},10,5};

  // InsertSort(&arr,8);
  cout<<isSorted(arr);

    Display(arr);
    
}