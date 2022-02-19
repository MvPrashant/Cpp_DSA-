//call by address
#include<bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int bredth;
};
void changeLength(struct Rectangle *p,int l)
{
  p->length=l;
}

int main()
{
  struct Rectangle r={10,5};
  changeLength(&r,30);

  cout<<r.length<<endl<<r.bredth;

  return 0;
}

