
// SUBARRAY-
// number of subarrays of an array with n elements
// = nC2 + n=n*(n+1)/2
// subsequences-
// number of subsequences of an array of n elements-
// = 2^n




// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
// int n,mx=INT_MIN;
// cin>>n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }
// for (int i = 0; i < n; i++)
// {
//      mx=max(mx,arr[i]);
// }
// cout<<"MAX: "<<mx<<endl;
// return 0;
// }
#include<iostream>
using namespace std;
int main()
{
int n,current=0;
cin>>n;
int arr[n];
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    current=0;
    for (int j = i; j < n; j++)
    {
        current+=arr[j];
        cout<<current<<endl;
    }
    
}

return 0;
}