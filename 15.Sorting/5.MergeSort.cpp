 
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
void IMergeSort(int A[],int n)
{
    int p,l,h,mid;
    for(p=2;p<=n;p=p*2)
    {
        for(int i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n)
    Merge(A,0,p/2-1,n-1);
}

int main()
{
     int A[]={3,6,1,7,2,10,5,8,9,4};
 
   IMergeSort(A,10);
   for(int i=0;i<10;i++)
    cout<<A[i]<<" ";
}