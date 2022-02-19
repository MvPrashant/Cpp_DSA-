//pascals triangle
#include <bits/stdc++.h>
using namespace std;

// int fact(int n) 
// { 
//     if(n==0) return 1;
//     return fact(n-1)*n;
// }

int comb(int n, int r) 
{
   if(r==0 ||n==r) return 1;
   return comb(n-1,r-1)+comb(n-1,r);
   
}

int main()
{
    cout<<comb(5,3);
}