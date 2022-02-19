
//finding missing element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4,6,7,9,10,11};  
    int n=9;

    int diff=1-0;
    for(int i=0; i<n; i++)
        if(a[i] -i!=diff)
        while(diff<a[i]-i)
        {
            cout<<i+diff<<endl;
            diff++;
        }

}
