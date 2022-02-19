#include<bits/stdc++.h>
using namespace std;

class Complex
{
   public :
   int real,img;

   Complex(int r=0, int i=0)//constructor
   {
       real=r;
       img=i;
   }

  // Complex add(Complex c)
   Complex operator+(Complex c)
   {
       Complex temp;
       temp.real=real+c.real;
       temp.img=img+ c.img;
       return temp;
   }
   Complex operator-(Complex c)
   {
       Complex temp;
       temp.real=real -c.real;
       temp.img=img - c.img;
       return temp;
   }
};

int main()
{
    Complex c1(5,3),c2(10,5),c3;
    
     c3=c1 + c2;   // c3=c1.add(c2);
     cout<<c3.real<<" + i"<<c3.img<<endl;
    
     c3=c2 - c1;  
     cout<<c3.real<<" + i"<<c3.img<<endl;
    
}
