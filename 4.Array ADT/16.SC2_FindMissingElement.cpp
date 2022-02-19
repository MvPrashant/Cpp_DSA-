
//finding missing element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4,6,7,11};
    int h[11]={0} ;//size -max of a  
    int n=9;
    int l=1;
    for(int i=0; i<11; i++)
     {
         h[a[i]]++;
     }
     for(int i=l; i<11; i++)
       if(h[i]==0)
         cout<<i<<" ";


    

}
