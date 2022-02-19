#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0) return 0;
    else
    return sum(n-1)+n;
}


int main()
{
    int n=7;
   cout<<sum(n);
}
// int main() //without recursion
// {
//     int n;
//     cin>>n;
//     cout<<(n*(n+1))/2;

// }