#include <iostream>
using namespace std;

int main() {
          
     int A[10]={1,2,3,4,5};
     int y=0;
     
     for(int x:A){
         y+=x;
     }
     cout<<y<<endl;

	return 0;
}