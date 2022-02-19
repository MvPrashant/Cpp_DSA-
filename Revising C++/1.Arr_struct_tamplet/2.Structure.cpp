#include<iostream>
using namespace std;

// struct Rectangle{
//     int l,b;
//     };

//     int main()
//     {
//         struct Rectangle r;
//         r.l=10;
//         r.b=20;

//         cout<<r.l*r.b;

//  }

    int main()
    {
        int n,x,k;
       cin>>n>>x>>k;
        int h[n],r[n],arr[100000];

        for(int i=0;i<n;i++)
        cin>>h[i];
        
        for(int i=0;i<n;i++)
        cin>>r[i];
 
        for(int i=0;i<n;i++)
        {   
            h[i]+=r[i];
            while(arr[i]<45)
              arr[i]+=4;
        }        

    }