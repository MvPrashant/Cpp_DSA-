#include<bits/stdc++.h>
using namespace std;

int swap(int *i,int *j)
{
   int temp;
   temp=*i;
   *i=*j;
   *j=temp;

   return 0;

}
int main ()
{
    int arr[10]={1,2,3,4,5};
    int num=3;

    for (int i=0; i<5; i++)
    if(num==arr[i])
    {
      swap(&arr[i],&arr[0]);
     cout<<num<<" is in "<<i<<" Index";
    }
   cout<<endl;
   for(int x:arr)
   cout<<x<<" ";

   return 0;
}