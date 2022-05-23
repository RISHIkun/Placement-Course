#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 //half pyramin
 for (int i = 1; i <=n; i++)
 {
    for (int j = 1; j <=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
 // inverted half pyramid
 cout<<endl;
  for (int i = n; i >=1; i--)
 {
    for (int j = 1; j <=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
 }
 // inverted half pyramid 180 degree rotation
 cout<<endl;
 for (int i = 1; i <=n; i++)
 {
    for (int j = 1; j <=n; j++)
    {
        if (j<=n-i)
        {
           cout<<" ";
        }
        else
        {
            cout<<"*";
        }

        
    }
    cout<<endl;
 }
 // half pyramid using numbers
 
 for (int i = 1; i <=n; i++)
 {
     for (int j = 0; j < i; j++)
     {
        cout<<i<<" ";
        
        
     }
     cout<<endl;
   
 }
 
 // Floyd's triangle
 int count=1;
 for (int i = 1; i <=n; i++)
 {
     for (int j = 0; j < i; j++)
     {
        cout<<count<<" ";
        count++;
        
     }
     cout<<endl;
   
 }
 cout<<endl;
 //butterfly pattern
 for (int i = 1; i <=n; i++)
 {
     for (int j = 1; j <=i; j++)
     {
         cout<<"*";
     }
     int space=2*n - 2*i;
     for (int j = 1; j <=space; j++)
     {
         cout<<" ";
     }
     for (int j = 1; j <=i; j++)
     {
         cout<<"*";
     } 
     
    cout<<endl; 
 }
 for (int i = n; i >=1; i--)
 {
     for (int j = 1; j <=i; j++)
     {
         cout<<"*";
     }
     int space=2*n - 2*i;
     for (int j = 1; j <=space; j++)
     {
         cout<<" ";
     }
     for (int j = 1; j <=i; j++)
     {
         cout<<"*";
     } 
     
    cout<<endl; 
 }
 
return 0;
}
