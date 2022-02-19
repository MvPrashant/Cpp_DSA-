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
void Bubble(int A[],int n)
{
    int flag =0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                 swap(&A[j],&A[j+1]);
                 flag=1;
            }
            if(flag==0)
            break;
        }
    }
   
}

int main()
{
   int A[]={3,6,1,7,2,10,5,8,9,4};
   
   Bubble(A,10);
   for(int i=0;i<10;i++)
    cout<<A[i]<<" ";


return 0;
}