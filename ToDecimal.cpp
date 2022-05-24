#include<bits/stdc++.h>
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
int hexadecimaltobinary(string n)
{
    int x=1;
    int ans=0;
   int s=n.size();
   for (int i = s-1; i >=0; i--)
   {
      if(n[i]>='0'&&n[i]<='9')
      {
          ans+=x*(n[i]-'0');
      }
      else if(n[i]>='A'&&n[i]<='F')
      {
          ans+=x*(n[i]-'A'+10);
      }
      x*=16;
   }
   

    return ans;
}

int main()
{
int n,n2;
string n3;
cout<<"Enter binary num to convert into decimal"<<endl;
cin>>n;
cout<<binarytodecimal(n)<<endl;
cout<<"Enter octal num to convert into decimal"<<endl;
cin>>n2;
cout<<octaltodecimal(n2)<<endl;
cout<<"Enter the hecadecimal num to convert into decimal"<<endl;
cin>>n3;
cout<<hexadecimaltobinary(n3);
return 0;

}
