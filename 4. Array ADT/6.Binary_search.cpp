#include<bits/stdc++.h>
using namespace std;

int Binary(int *arr,int key,int h)
{
    int l=0,mid=0;
    
      while(l<=h)
   {
      mid=(l+h)/2;
      if(key==arr[mid])
       return mid;
      else if(key<arr[mid]) 
       h=mid-1;
       else
       l=mid+1;

   } 
   return -1;

}
int Binary_Recursive(int arr[],int l,int h,int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        return mid;
        else if(key<arr[mid]) 
        return Binary_Recursive(arr,l,mid-1,key);
        else
        return Binary_Recursive(arr,mid+1,h,key);
    }
    return -1;
}
int main ()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int num=9;

    cout<<Binary(arr,num,9)<<endl;
    cout<<Binary_Recursive(arr,0,9,num)<<endl;
  
    

   return 0;
}