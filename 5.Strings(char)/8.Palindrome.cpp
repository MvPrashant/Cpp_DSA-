#include<bits/stdc++.h>
using namespace std;


int main()
{
    char A[] ="liril";
    int i=0,j;

     for(j=0;A[j]!='\0';j++)
     {
     }
     j-=1;
     while(i<j)
     {
         if(A[i]!=A[j])
          break;
         i++;j--; 
     }
     if(i==j)cout<<"Palindrome";
     else cout<<"Not a Palindrome";    
     

    return 0;   
}