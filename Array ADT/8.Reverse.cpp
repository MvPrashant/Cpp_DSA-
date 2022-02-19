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
void Reverse(Array *arr)
{
    int *B;
    B=new int[arr->length]; 
    for(int i=arr->length-1, j=0;i>=0;i--,j++)
       B[j]=arr->A[i];
    for(int i=0;i<arr->length;i++)
      arr->A[i]=B[i];   

}
void Reverse2(Array *arr)
{
    for(int i=0,j=arr->length-1;i<j;i++,j--)
    {
       swap(arr->A[i],arr->A[j]); 
    }
}

int main()
{
    Array arr={{2,3,4,5,6},10,5};

    Display(arr);
    cout<<"\nAfter reverse"<<endl;
    Reverse2(&arr);
    Display(arr);    

}