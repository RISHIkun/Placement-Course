#include<iostream>
using namespace std;
int binarytodecimal(int n)
{
    int x=1;
    int ans=0;
    while (n>0)
    {
        int lastdigit=n%10;
        ans+=lastdigit*x;
        x*=2;
        n=n/10;

    }
    return ans;
}
int main()
{
int n;
cin>>n;
cout<<binarytodecimal(n);
return 0;
}