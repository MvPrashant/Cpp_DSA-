#include<iostream>
using namespace std;


int main() 
{
    int x=20,y=0,z;

    try{
        //throw 10;
        //throw 10.5;
        //throw 'a';     
        throw string("String Exception");
    }catch(int e){
        cout<<"Division by Zero     Error "<<e;
    }catch(double e){
        cout<<"Double Catches Error "<<e;
    }catch(char e){
        cout<<"Char catch"<<e;
    }catch(...){//its a universal Catch
        cout<<"\nDefault All catch";
        /*if we use this type of catch it
     is said we are not intrested in 
     knowing exact cause of exception*/
    }

}