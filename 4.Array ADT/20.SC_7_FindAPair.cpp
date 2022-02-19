
#include<bits/stdc++.h>
using namespace std;
int Sorted(int *a,int n,int Sum)
{
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(a[i]+a[j]==Sum)
       {
          cout<<a[i]<<" + "<<a[j]<<"="<<Sum<<endl;
          i++;j--;
       }
        else if(a[i]+a[j]<Sum)
        i++;
        else
        j--;
    }

   return 0;
}
int UnsortedArray(int *b,int n,int Sum)
{
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
         {
             if(b[i]+b[j]==Sum)
            {
                cout<<endl<<b[i]<<" + "<<b[j]<<"="<<Sum;
                break;
            }  
                        
         
         }
    }
    return 0;
   
}
int UnsortedArrayHashing(int *b,int n,int Sum)
{
    int max=14;
    int h[max]={0};

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(h[Sum-b[i]]!=0 && Sum-b[i]>0 )
        cout<<endl<<b[i]<<" + "<<Sum-b[i]<<"="<<Sum;
         
        h[b[i]]++;
    }
    return 0;
   
}
int main()
{
    int a[10]={1,2,3,4,6,7,8,9,10,14};
    int b[10]={6,2,9,1,7,8,3,10,14,4};
    int Sum=10; 
    
     Sorted(a,10,Sum);
     UnsortedArray(b,10,Sum);
     UnsortedArrayHashing(b,10,Sum);
    

}
