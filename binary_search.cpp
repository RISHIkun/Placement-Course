/*
after first iteration length=n
after secont ineration length=n/2
after k iteration length= n/2^k
length after k iteration of  is =1
n/2^k=1
n=2^k
log(base2)(n)=log(base2)(2^k)
log(base2)(n)=k*log(base2)(2)
k=log(base2)n
O(log(base2)n)
*/
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
   int s=0;
   int e=n;
   while (s<=e)
   {
       int mid = (s+e)/2;
       if (arr[mid]==key)
       {
            return mid;
       }
    else if (arr[mid]>key)
    {
        e=mid-1;
    }
    else if (arr[mid]<key)
    {
        e=mid+1;
    }
       
       
   } 
   return -1;
}
int main()
{
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
   for (int  j=i+1 ; j < n; j++)
   {
       if (arr[i]>arr[j])
       {
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;

       }
       
   }
   
}
for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
}
cout<<endl;



int key;
cout<<"Enter key"<<endl;
cin>>key;
cout<<binarySearch(arr,n,key);

return 0;
}