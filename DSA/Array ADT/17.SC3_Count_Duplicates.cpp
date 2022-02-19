
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,2,3,4,9,9,9,10,11,11};
    int duplicate=0;
    
    for(int i=0; i<10; i++)
    {
        if(a[i]==a[i+1] &&a[i]!=duplicate)
        {            
          cout<<a[i]<<" ";
          duplicate=a[i];
        }       

    }

    

}
