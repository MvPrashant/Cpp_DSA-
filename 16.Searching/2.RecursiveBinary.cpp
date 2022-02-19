#include<bits/stdc++.h>
using namespace std;

int  RescursiveBinarySearch(int A[],int num,int low, int high)
{
      
   int mid=(low+high)/2;        
   
   if(num==A[mid])
     return mid;
    
   else if(num>A[mid])
     return RescursiveBinarySearch(A,num,mid+1,high);
        
   else 
     return RescursiveBinarySearch(A,num,low,mid-1);          
        
}

int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,12};
    int num;
    cout<<"Enter no :";
    cin>>num;

    int index=RescursiveBinarySearch(A,num,0,9);
  
      cout<<"\nIndex "<<index+1<<" Element is "<<A[index];
   
    //timeComplexity -log(n);
    return 0;

}