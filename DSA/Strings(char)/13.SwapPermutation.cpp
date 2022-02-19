#include<bits/stdc++.h>
using namespace std;

void Perm(char A[],int l,int h)
{
    if(l==h)
    cout<<A<<endl;

    else
    for(int i=l;i<=h;i++)
    {
        swap(A[l],A[i]);
        Perm(A,l+1,h);
        swap(A[l],A[i]);
    }
}

int main()
{
    char A[] ="abc";

    Perm(A,0,2);
    
return 0;   
}