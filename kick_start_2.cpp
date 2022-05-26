// Record breaker
/*
record breaking day=number should be greater than all previous days
and greater than the following day
*/
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, mx = INT_MIN;
    int count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > mx)
            {
                count++;
            }
        }

        if (i == n - 1)
        {
            if (arr[i] > mx)
            {
                count++;
            }
        }

        mx = max(arr[i], mx);
    }
    cout << count;
    return 0;
}