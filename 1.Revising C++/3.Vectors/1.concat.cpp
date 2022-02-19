#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v2={6,7,8,9,10};
    
   
    for(int i:v2)
    v.push_back(i);
    
    for(int i:v)
    cout<<i<<" ";
    
    
}
