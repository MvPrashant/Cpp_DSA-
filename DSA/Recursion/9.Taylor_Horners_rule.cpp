#include<bits/stdc++.h>
using namespace std;

double e(int x,int n)
{
    static double s=1;
    
    if(n==0) return s;
    s=1+s*x/n;
    return e(x,n-1);

}
int main()
{
    cout<<e(2,10);
}