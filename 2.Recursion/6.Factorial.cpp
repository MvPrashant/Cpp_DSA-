#include<bits/stdc++.h>
using namespace std;

int recursiveFact(int n) 
{
    if(n==0) return 1;
    else
    return recursiveFact(n-1)*n;
}
int iterativeFact(int n) 
{
    int f=1;
    for(int i=1;i<=n;i++)
    f=f*i;

    return f;
}
int main()
{
  int n=5;
 //cin>>n;
 cout<<"recursiveFact ="<<recursiveFact(n);
 cout<<"\niterativeFact ="<<iterativeFact(n);
 }