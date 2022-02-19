//Anagram - a word with same letters 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char A[] ="medical";
    char B[] ="decimal";
    int H[26]={0};
    int i;
    
     for(i=0;A[i]!='\0';i++)
     {
       H[A[i]-97]+=1; 
     }
     for(i=0;B[i]!='\0';i++)
     {
         H[B[i]-97]-=1; 
         if(H[B[i]-97]<0)
         {
             cout<<"Not Anagram";
             break;
         }
     }
     if(B[i]=='\0')
     cout<<"Anagram";

    return 0;   
}