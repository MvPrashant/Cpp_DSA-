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
       Sparse operator +(Sparse &s);
   friend istream & operator>> (istream &is, Sparse &s);
   friend ostream & operator<< (ostream &os, Sparse &s);

};
Sparse Sparse::operator+(Sparse &s)
{
   int i=0,j=0,k=0;
   if(m!=s.m ||n!=s.n)
   return Sparse(0,0,0);
 //m&n total no. of rows n columns //num= no of non zero element
   Sparse *sum = new Sparse(m,n,num+s.num); 
  
  while(i<num && j<s.num)
  {
      if(ele[i].i<s.ele[j].i)
       sum->ele[k++]=ele[i++];
  
      else if(ele[i].i>s.ele[j].i)
       sum->ele[k++]=ele[j++];

      else
      {
          if(ele[i].j<s.ele[j].j)
            sum->ele[k++]=ele[i++];
          else if(ele[i].j>s.ele[j].j)
           sum->ele[k++]=ele[j++];  

          else //if both element are equal
          {
              sum->ele[k]=ele[i];
              sum->ele[k++].x=ele[i++].x+s.ele[j++].x;
          }          
      } 
      //for non zero
       for(;i<num;i++)sum->ele[k++]=ele[i];
       for(;j<s.num;j++)sum->ele[k++]=s.ele[j];
       sum->num=k;

}
       return *sum;
 
}

istream & operator>> (istream &is, Sparse &s)
{
    cout<<"\nEnter non-Zero Elements : ";
   for(int i=0;i<s.num;i++)
     cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
   /*element 0 ka i-th index , element j ka 0th index
       le raha hai ele[i].i  aur s to ele ko class se jod raha h*/
   return is;
}

ostream & operator<< (ostream &os, Sparse &s)
{
   int k=0;
   for(int i=1;i<=s.m;i++)
   {
    for(int j=1;j<=s.n;j++)
    {  /*if(s.ele[k].i ==i) iska matlab h-aagar ele[k] 
        ka jo index h i vo and loop ka index i equal h 
        to print krna h,same for j */            
        if(s.ele[k].i ==i && s.ele[k].j ==j)
          cout<<s.ele[k++].x<<" ";
        else
          cout<<"0 ";
     }
     cout<<endl;
   } 
 return os;
}


int main()
{
   Sparse s1(5,5,5);
    Sparse s2(5,5,5);
    
   cin>>s1;
   cin>>s2;

   Sparse sum=s1+s2;
   cout<<"First Matrix :\n"<<s1;
   cout<<"Second Matrix :\n"<<s2;
   cout<<"Sum Matrix :\n"<<sum;




   return 0;
}



