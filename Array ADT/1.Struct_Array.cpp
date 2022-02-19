#include<bits/stdc++.h>
using namespace std;

//array is created in heap
struct Array 
{
   int *A;
   int size;
   int length;
};
void Display(Array arr)
{
   cout<<"\nElements Are :";
   for(int i=0;i<arr.length;i++)
     cout<<endl<<arr.A[i];
}
int main()
{
    Array arr;
    int n;
    cout<<"Enter Size :";
    cin>>arr.size;
    arr.A=new int[arr.size];
    arr.length=0;

    cout<<"\nEnter no:";
    cin>>n;

    cout<<"\nEnter Array:";
    for(int i=0; i<n; i++)
     cin>>arr.A[i];

    arr.length=n;
    Display(arr);




}