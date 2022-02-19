//Dynamic -array stored in heap

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[5];
    int *p;
    p=new int[5];

    p[0]=2;
    p[1]=5;
    cout <<p[0] << endl<<p[1];
}