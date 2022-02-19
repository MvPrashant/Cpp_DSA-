#include<iostream>
using namespace std;

class MyException1{
 //parent class
};
class MyException2 : public MyException1
{
    //child class
};
int main() 
{
    try{    
        throw MyException2();
    }catch(MyException2 e){//child should always be first
        cout<<"MY Ex2 ";
    }catch(MyException1 e){
        cout<<"MY Ex1 ";      
    }catch(...) {
        cout<<"Default "; 
    }

}