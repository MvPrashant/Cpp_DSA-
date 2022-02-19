#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] ="Prashant";
    int j,t;
     for(j=0;A[j]!='\0'; j++)
     {}
     j-=1;
     for(int i=0;i<j;i++,j--)
      {
          t =A[i];
          A[i]=A[j];
          A[j]=t;
      }
      cout<<A;   

    return 0;   
}