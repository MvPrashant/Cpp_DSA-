#include<bits/stdc++.h>
#include<stdio.h>
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
     cout<<" "<<arr.A[i];
}
struct Array* Union(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

 while(i<arr1->length && j<arr2->length)
 {
    if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
    else if(arr2->A[j]<arr1->A[i])
        arr3->A[k++]=arr2->A[j++];
    else
    {
        arr3->A[k++]=arr1->A[i++];
        j++;
    }    
 }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
     for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=k;
    arr3->size=10;

 return arr3;
}
struct Array* Intersection(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

 while(i<arr1->length && j<arr2->length)
 {
    if(arr1->A[i]<arr2->A[j])
        i++;
    else if(arr2->A[j]<arr1->A[i])
        j++;
    else
    {
        arr3->A[k++]=arr1->A[i++];
        j++;
    }    
 }
   
    arr3->length=k;
    arr3->size=10;

 return arr3;
}
struct Array* Difference(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

 while(i<arr1->length && j<arr2->length)
 {
    if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
    else if(arr2->A[j]<arr1->A[i])
        j++;
    else
    {
        i++;
        j++;
    }    
 }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
     
    arr3->length=k;
    arr3->size=10;

 return arr3;
}
int main()
{
   Array arr1={{2,4,10,15,26},10,5};
   Array arr2={{3,4,15,18,20},10,5};
   Array *arr3;

  // arr3=Union(&arr1,&arr2);
   //arr3=Intersection(&arr1,&arr2);
   arr3=Difference(&arr1,&arr2);
   Display(*arr3);
   
   
return 0;
}