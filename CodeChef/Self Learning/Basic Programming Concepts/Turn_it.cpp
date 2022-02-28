//https://www.codechef.com/LP2TO301/problems/NFS
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
      int u,v,a,s;
      cin>>u>>v>>a>>s;

      if((u*u)-2*a*s<=v*v)cout<<"Yes\n";
      else cout<<"No\n";

    } 

  return 0;
}