/*Bubble sort can be made adaptive. 
that is :the time complexity changes
lowest time -O(n) //Highest -O(n^2);*/


/*In Bubble sort - 1st element is checked with 2nd and if greater its swapped
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}
void InsertionSort(int A[],int n)
{
  int x,j;

  for(int i=1;i<n;i++)
  {
     j=i-1;
     x=A[i];
     while(j>-1 && A[j]>x)
     {
        A[j+1]=A[j];
        j--;
     }
    A[j+1]=x;

  }
}

int main()
{
   int A[]={3,6,1,7,2,10,5,8,9,4};
   
   InsertionSort(A,10);
   for(int i=0;i<10;i++)
    cout<<A[i]<<" ";


return 0;
}