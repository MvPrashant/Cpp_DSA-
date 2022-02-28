// https://www.codechef.com/LP2TO301/problems/MINPIZZAS
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
      int N,K;
      cin>>N>>K;      
       //cout<<(std::lcm(N,K))/K<<"\n"; //this can also be used
       cout<<N/__gcd(N,K)<<"\n";
    } 

    return 0;
}