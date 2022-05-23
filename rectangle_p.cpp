#include<iostream>
using namespace std;
int main()
{
int row,column;
cin>>row>>column;
for (int i = 0; i < row; i++)
{
    for (int i = 0; i < column; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}