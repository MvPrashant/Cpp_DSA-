#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={-6,3,-8,10,5,-7,-9,12,-4,2};
    int length=10;
    
    int i=0;
    int j=length-1;
    
    while(i<j)
    {
         while(arr[i]<0){i++;}
         while(arr[j]>=0){j--;}
         
         if(i<j)
         {
             swap(arr[i],arr[j]);
         }
    }
    
    for(int i:arr)
    cout<<i<<" ";

}