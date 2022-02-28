//https://www.codechef.com/LP2TO301/problems/ALTER
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
      int a,b,p,q;
      cin>>a>>b>>p>>q;
      if(p%a==0 && q%b==0 &&(p/a==q/b || abs(p/a-q/b)==1))
       cout<<"Yes\n";
      else 
        cout<<"No\n"; 
    } 

  return 0;
}