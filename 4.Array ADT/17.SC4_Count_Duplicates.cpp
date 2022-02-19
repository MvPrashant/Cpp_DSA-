
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,2,3,4,9,9,9,10,11,11};
    int j=0,n=10;
    
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1] )
        {            
          j=i+1;
          while(a[j]==a[i])j++;
          cout<<a[i]<<" appears "<<j-i<<" times "<<endl;
          i=j-1;
        }       

    }

    

}
