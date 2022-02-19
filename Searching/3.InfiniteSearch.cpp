#include<bits/stdc++.h>
using namespace std;

 int BinarySearch(int A[],int key,int low,int high)
{
    while(low<=high)
    {
        int mid=(low+high)/2;        
        if(key==A[mid])
         return mid;

        else if(key>A[mid])
         low=mid+1;
        
        else 
         high=mid-1;            
    }
    return -1;
}
int SearchInfinite(int A[],int key)
{
   int low=0;
   int high=1; 
   while(A[high]<key)
   {
       low=high; 
       high=2*high;
   }
   return BinarySearch(A,key,low,high);
}
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,12};
    int key;
    cout<<"Enter no :";
    cin>>key;

    int index=SearchInfinite(A,key);
    if(index!=-1)
    cout<<"\nIndex "<<index+1<<" Element is "<<A[index];
    else 
    cout<<"Element not found";  
    
    
    return 0;

}