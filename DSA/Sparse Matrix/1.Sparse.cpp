//its a matrix in wich we can enter any no. of element
//with its index no

#include <bits/Stdc++.h>
using namespace std;

class Element
{
     public :
     int i,j,x; //x-value of x
  
};
class Sparse
{
   int m,n,num;
   Element *ele;

   public:
       Sparse(int m,int n,int num)
       {
           this->m = m;
           this->n = n;
           this->num = num;
           ele = new Element[this->num];
       }
       ~Sparse()
       {
           delete[] ele;
       }
       void read()
       {
          cout<<"\nEnter non-Zero Elements : ";
          for(int i=0;i<num;i++)
           cin>>ele[i].i>>ele[i].j>>ele[i].x;
       
       }
       void Display()
       {
          int k=0;
           for(int i=1;i<=m;i++)
            {
                for(int j=1;j<=n;j++)
                {
                   if(ele[k].i ==i && ele[k].j ==j)
                    cout<<ele[k++].x<<" ";
                    else
                    cout<<"0 ";
                }
                cout<<endl;
                
            } 
       }
};

int main()
{
   Sparse s1(5,5,5);
   s1.read();
   s1.Display();

   return 0;
}



