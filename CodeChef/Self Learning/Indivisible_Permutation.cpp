//https://www.codechef.com/LP2TO301/problems/INDIPERM
#include<iostream>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
      int N;
      cin>>N;
      
      for(int i=1; i<N; i++){
         cout<<i+1<<" ";
      }
     cout<<1<<"\n";
    } 

    return 0;
}