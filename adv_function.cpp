#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c)
{
    int x,y,p;
    int m=max(a,max(b,c));
    if(a==m)
    {
       x=b;
       y=c;
    }
    else if(b==m)
    {
        x=a;
        y=c;

    }
    else if(c==m)
    {
        x=a;
        y=b;

    }

if( m*m == (x*x) + (y*y) )
{
    return true;
}
else
{
    return false;
}
}
int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  if(check(x,y,z))
  {
      cout<<"Pythogorian Triplet"<<endl;
  }
  else
  {
     cout<<"Not a pyhagorian triplet"<<endl;
  }
return 0;
}