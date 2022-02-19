#include<iostream>
using namespace std;

class Exception 
{
  //we can also throw exception from our own class 
};
int Division(int a, int b)throw(Exception)//type of thrown data type
{
  if(b==0)
  throw Exception();
 return a/b; 
}
int main() 
{
    int x=20,y=0,z;

    try{        
        z=Division(x,y); 
        cout<<z<<"\n"; 
    }catch(Exception){
        cout<<"Division by Zero ";
    }
}