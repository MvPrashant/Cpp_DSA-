
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,2,3,4,9,9,9,10,11,11};
    int max =11;
    int h[max+1]={0};
    
    for(int i=0; i<max+1; i++)
    {
       h[a[i]]++;
    }
    for(int i=0; i<max+1; i++)
    if(h[i]>1)
     cout<<i<<" no of times "<<h[i]<<endl;
     

    

}
