 
#include<bits/stdc++.h>
using namespace std;

void Merge(int A[],int l,int mid,int h)
{

    int i=l;
    int k=l;
    int j=mid+1;
    int B[h+1];

    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
         B[k++]=A[i++];
        else
         B[k++]=A[j++];
    }
    while(i<=mid)
     B[k++]=A[i++];
    while(j<=h)
     B[k++]=A[j++];

    for(int i=l;i<=h;i++)
     A[i]=B[i];
}
void MergeSort(int A[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
    
}


int main()
{
     int A[]={3,6,1,7,2,10,5,8,9,4};
 
   MergeSort(A,0,9);
   for(int i=0;i<10;i++)
    cout<<A[i]<<" ";
}