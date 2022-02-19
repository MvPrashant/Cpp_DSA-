#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int A[5]={1,2,3,4,5};

//    for(int i = 0; i < 5; i++)
//    cin>>A[i];
   
   for(int i = 0; i < 5; i++)
   {
       for(int j = 0; j < 5; j++)
       {
           if(i == j)cout<<A[i];
           else
            cout<<0;           
       }
       cout<<endl;
   }

    return 0;
}
