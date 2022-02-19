#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[]="How are you";
    int word=1;
    for(int i=0;s[i]!='\0'; i++)
     {
         if(s[i]==' '&&s[i-1]!=' ')
           word++;    
        
     }
     cout<<word<<endl;

    return 0;   
}