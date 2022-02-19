//sparwe matrix using ll
#include<bits/stdc++.h>
using namespace std;
class Elements
{
   public: int i,j,k;
};
class Node{
 int col,val;
 Node *next;

};
class Sparse
{
   public : 
   int m,n,num;
   Elements *e;
   
   Sparse(int a,int b,int c)
   {
      m=a;
      n=b;
      num=c;
      e=new Elements[this->num];
   }
   void Read()
   {
      for(int i=0;i<num;i++)
        cin>>e[i].i>>e[i].j>>e[i].k;
   }

   void Create();
   void Display();
};
void Sparse ::  Create(int )
{
   
}

int main()
{
    int m,n,num;
    cin >> m >> n>>num;
    Sparse s(m,n,num);
}