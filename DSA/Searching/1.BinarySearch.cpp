#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,12};
    int num=9;
    // cout<<"Enter no :";
    // cin>>num;

    int low=0,high=9;

    while(low<=high)
    {
        int mid=(low+high)/2;        
        if(num==A[mid])
        {
          cout<<"\nIndex "<<mid<<" Element is "<<A[mid];
          break;
        }
        else if(num>A[mid])
         low=mid+1;
        
        else 
         high=mid-1; 

         if(low>high)   
         cout<<endl<<"Element not found";  
    }
    return 0;

}