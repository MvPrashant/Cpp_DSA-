//Lower triangular matrix 
// |a11  0   0   0   0  |   
// |a21 a22  0   0   0  |
// |a31 a32 a33  0   0  |  
// |a41 a42 a43 a44  0  |
// |a51 a52 a53 a54 a55 |

//A[]=|a11|a21|a22|a31|a32|a33|a41|a42|a43|a44|a51|a52|a53|a54|a55|

//we will use $$ Row major $$ storing system 
//store value when i==j
//Index(A[5,4]=[1+2+3+4]+3=13th index)
//Index(A[i][j]= (i(i-1))/2 + j-1) index at which val is stored

#include<bits/stdc++.h>
using namespace std;

class LowerTri
{
   int *A;
   int n;

   public:
   LowerTri()
   {
       n=2;
       A=new int[2*(2+1)/2];
   }
   LowerTri(int n)
   {
       this->n=n;
       A=new int[n*(n+1)/2];
   }
   ~LowerTri()
   {
      delete[] A;
   }
   void Set(int i,int j,int x);
   int Get(int i,int j);
   void Display();
   int Dimension(){return n;}
};
//i==row,j==column//x==value
void LowerTri::Set(int i,int j,int x)
{
    if(i>=j)
    A[i*(i-1)/2 + j-1]=x;
    //column major= A[n*(j-1)-(j-2)*(j-1)/2 +i-j] = x;
}
int LowerTri::Get(int i,int j)
{
    if(i>=j)
    return A[i*(i-1)/2 + j-1];
    //column major= return A[n*(j-1)-(j-2)*(j-1)/2 +i-j];

}
void LowerTri::Display()
{
    for(int i=1;i<=n;i++)
     {
       for(int j=1;j<=n;j++)
         {
             if(i>=j)
             cout<<A[i*(i-1)/2 + j-1];
       //column major=cout<<A[n*(j-1)-(j-2)*(j-1)/2 +i-j]<<" ";
             else
             cout<<"0";
         }
         cout<<endl;
     }
}

int main()
{
   int d,x;
   cout<<"Enter Dimension :";
   cin>>d;

   LowerTri lm(d);//assigning n==d in object
   cout<<"\nEnter All Elements : ";
   for(int i=1;i<=d;i++)
    for(int j=1;j<=i;j++)
    {
        cin>>x;
        lm.Set(i,j,x);
    }
    lm.Display();
    
    return 0;

}






