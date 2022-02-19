//3 methods
//comparing with other
//hash table method
//using bits
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char A[] ="finding";
    int H[26]={0};
    int i=0;

     for(i=0;A[i]!='\0';i++)
     {
        H[A[i]-97]+=1;
     }
     for(i=0;i<26;i++)
     {
         if(H[i]>1)
         cout<<endl<<char(i+97)<<" times = "<<H[i];
     }
       
     

    return 0;   
}