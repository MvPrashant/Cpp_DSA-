//Power function
#include<bits/stdc++.h>
using namespace std;

int pow1(int m,int n)
{
   if(n==0) return 1;
   return pow1(m,n-1)*m;
}
int pow2(int m,int n)
{
   if(n==0) return 1;
    
   if(n%2==0)
   return pow2(m*m,n/2);
    
    return m*pow2(m*m,n/2);
}


int main()
{
    cout<<pow1(5,2);//2 power 10
    cout<<endl<<pow2(3,4);//2 power 10
}