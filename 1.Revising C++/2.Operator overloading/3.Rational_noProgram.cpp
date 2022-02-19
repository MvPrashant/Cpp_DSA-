/*Write a class for Rational number (p/q) 
  with overloading + and << operator*/

  #include<bits/stdc++.h>
  using namespace std;

class Rational
{
    int p,q;
    public:
    Rational()
    {
         p=1;
         q=1;
    }
    Rational(int p,int q)
    {
        this->p=p;
        this->q=q;
    }
    Rational operator+(Rational r)
    {
        Rational T;
        T.p=this->p*r.q +this->q*r.p;
        T.q=this->q*r.q;
        return T;
     }

   friend ostream &operator<<(ostream &out, Rational &r);
 };

 ostream &operator<<(ostream &out, Rational &r)
 {
     out<<r.p<<"/"<<r.q;
     return out;
      }

int main()
{
   Rational r1(5,4),r2(3,7),r3;

   r3=r1+r2;
   cout<<"Sum of "<<r1<<" and "<<r2<<" is "<<r3<<endl;

}