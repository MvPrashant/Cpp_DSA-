//Overloading Insertion operation
#include<bits/stdc++.h>
using namespace std;

class Complex
{
   int real,img;
   public :
   Complex(int r=0,int i=0)
   {
        real=r;
        img=i;
   } 

   friend ostream & operator<<( ostream &out, Complex &c );
 
};
ostream & operator<<( ostream &out, Complex &c )
{
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}

int main()
{
    Complex c(5,3);
    cout<<c;        
    
}