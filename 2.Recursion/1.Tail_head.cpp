#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}
int main()
{
    int n=5;
    fun(n);
}
