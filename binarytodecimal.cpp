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
int octaltodecimal(int n)
{
    int x=1;
    int ans=0;
    while (n>0)
    {
        int lastdigit=n%10;
        ans+=lastdigit*x;
        x*=8;
        n=n/10;

    }
    return ans;
}

int main()
{
int n,n2;
cout<<"Enter binary num to convert into decimal"<<endl;
cin>>n;
cout<<binarytodecimal(n)<<endl;
cout<<"Enter octal num to convert into decimal"<<endl;
cin>>n2;
cout<<octaltodecimal(n2)<<endl;
return 0;
}
