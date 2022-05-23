#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cout<<"enter a no."<<endl;
cin>>n;
int sum=0;
 int temp=n;
while (n>0)
{
    int lastdigit=n%10;
    sum+= pow(lastdigit,3);
    n=n/10;
}
if (sum==temp)
{
    cout<<"Armstrong number"<<endl;
}
else
{
    cout<<" not a Armstrong no."<<endl;
}

return 0;
}
