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
   void Display() 
   { 
       cout<<real<<" + i"<<img<<endl;
   }

   friend Complex operator +( Complex c1, Complex c2 );
 
};
Complex operator +( Complex c1, Complex c2 )
{
    Complex T ;
    T.real= c1.real + c2.real;
    T.img= c1.img + c2.img;
    return T;
}

int main()
{
    Complex c1(5,3),c2(10,5),c3;

    c3=c1 +c2;
    c3.Display();
        
    
}