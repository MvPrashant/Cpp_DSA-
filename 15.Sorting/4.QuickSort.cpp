/*It uses patitioning procedure
*/

#include<bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}
int Partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;

    do
    {
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);

        if(i<j)swap(&A[i],&A[j]);

    }while(i<j);

    swap(&A[l],&A[j]);
    return j;
}
void QuickSort(int A[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=Partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}
int main()
{
     int A[]={3,6,1,7,2,10,5,8,9,4,INT32_MAX};
     int n=11;
   QuickSort(A,0,10);
   for(int i=0;i<10;i++)
    cout<<A[i]<<" ";
}