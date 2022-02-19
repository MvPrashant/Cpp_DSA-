#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] ="Painter";
    char B[] ="Painting";
    int i=0,j=0;

     for(;A[i]!='\0' && B[j]!='\0'; i++,j++)
     {
          if(A[i]!=B[j])
          break;
     }
     if(A[i]==B[j])cout<<"equal";
     else if(A[i]<B[j])cout<<"Smaller";
     else cout<<"Greater";

    return 0;   
}