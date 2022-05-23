#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for (int i = 2; i <=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
int n,r,ncr;
cin>>n>>r;
ncr=fact(n)/(fact(r)*fact(n-r));
cout<<ncr<<endl;
return 0
;
}