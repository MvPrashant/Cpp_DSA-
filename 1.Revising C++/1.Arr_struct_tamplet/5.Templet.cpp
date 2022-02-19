#include<iostream>
using namespace std;

template<class T>
class Arthematic
{
  T a;
  T b;
  public:
  Arthematic(T x,T y);
  T add();
  T sub();
};
template<class T>
Arthematic<T>::Arthematic(T x,T y)
{
    this->a=x;
    this->b=y;

}
template<class T>
T Arthematic<T>::add()
{
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arthematic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}
int main()
{
   Arthematic<int>a(10,20);
   cout<<a.add()<<endl;
   Arthematic<float>am(1.5,1.5);
   cout<<am.add()<<endl;

}
