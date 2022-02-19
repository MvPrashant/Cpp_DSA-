#include<bits/stdc++.h>
using namespace std;

class Term 
{
   public:
   int coeff; 
   int exp;
  
};
class Poly
{
    public:
    int n;
    Term *t;
};
void create(Poly *p)
{
   cout<<"Enter no of terms : ";
   cin>>p->n;
   p->t=new Term[p->n];

   cout<<"\nEnter terms :\n";
   for(int i=0;i<p->n;i++)
    cin>>p->t[i].coeff>>p->t[i].exp;
   
}
void display(Poly p)
{
    for(int i=0;i<p.n;i++)
    {
        cout<<p.t[i].coeff;
        if(p.t[i].exp !=0)
        cout<<"x^"<<p.t[i].exp<<"+";
    }
    cout<<endl;
}
Poly *add(Poly *p1, Poly *p2)
{
    Poly *sum ;
    sum=new Poly;
    sum->t=new Term[p1->n+p2->n];

    int i,j,k;
    i=j=k=0;
    while(i<p1->n && j<p2->n)
    {
        if(p1->t[i].exp > p2->t[i].exp)
          sum->t[k++]=p1->t[i++];
        else if(p1->t[i].exp < p2->t[i].exp)
          sum->t[k++]=p2->t[j++];

         else
         {
           sum->t[k].exp= p1->t[i].exp;
           sum->t[k++].coeff=p1->t[i].coeff + p2->t[j].coeff;
         } 
    }
    for(;i<p1->n;i++)sum->t[k++]=p1->t[i];
    for(;j<p2->n;j++)sum->t[k++]=p2->t[j];

    sum->n=k;
    return sum;

}
int main()
{
    Poly p1,p2,*p3;
    create(&p1);
    create(&p2);
   p3=add(&p1,&p2);
    cout<<endl;
    display(p1); 
    cout<<endl;
    display(p2); 
    cout<<endl;
    display(*p3); 


}