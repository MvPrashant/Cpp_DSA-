//https://www.codechef.com/LP2TO301/problems/MAKEDIV3
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
      
      if(N==1)cout<<3;
      else
      {
          for(int i=1;i<=N;i++)
            {
             if(i==1)cout<<1;
             else if(i==N) cout<<5;
             else cout<<0;
            }
      }
         cout<<"\n";
    } 

    return 0;
}