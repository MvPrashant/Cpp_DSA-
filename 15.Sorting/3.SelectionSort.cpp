/* 1-It perform min swaps
k pases give k smallest elements
*/

#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}
void SelectionSort(int A[],int n)
{
    int j,k=0;

    for( int i=0; i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
         {
             if(A[j]<A[k])
              k=j;
         }
         swap(&A[i],&A[k]);
    }
}
int main()
{
     int A[]={3,6,1,7,2,10,5,8,9,4};
   
   SelectionSort(A,10);
   for(int i=0;i<10;i++)
    cout<<A[i]<<" ";
}