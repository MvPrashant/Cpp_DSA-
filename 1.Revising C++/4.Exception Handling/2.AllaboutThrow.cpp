#include<iostream>
using namespace std;

class Exception 
{
  //we can also throw exception from our own class 
};
int main() 
{
    int x=20,y=0,z;

    try{
        if(y==0)
         throw Exception();
        z=x/y; 
        cout<<z<<"\n"; 
    }catch(Exception){
        cout<<"Division by Zero ";
    }
}