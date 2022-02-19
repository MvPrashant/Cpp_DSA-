//Fastest sorting -count sort
//hashing is used 


#include<bits/stdc++.h>
using namespace std;

int findMax(int A[],int n)
{
    int max = 0;

    for(int i = 0; i < n; i++)
      if(A[i] > max)
         max = A[i];
 return max;
}
void CountSort(int A[],int n)
{
    int max=findMax(A,n);

    int *c;
    c=new int[max+1];
    
    for(int i=0;i<max+1;i++)
     c[i]=0;

    for(int i=0;i<n;i++)
      c[A[i]]++;  
   
    int i=0,j=0;  
    
        while(i<max+1)
        {
           if(c[i]>0)
            {
                A[j++]=i;
                c[i]--;
            }
            else
             i++;
        } 
        delete [] c;
    
}
int main()
{
    int A[]={4,3,4,5,7,6,2,8,9,6,10,4};
    int n=sizeof(A)/sizeof(A[0]);

    CountSort(A,n);
    for(int i=0;i<n;i++)
    cout<<A[i]<<",";

}