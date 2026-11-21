#include <iostream>
#include <algorithm>
using namespace std;

int getMin(int arr[], int n)
{
    int minVal = arr[0];

    for (int i = 1; i < n; i++)
        minVal = min(minVal, arr[i]);

    return minVal;
}

int getMax(int arr[], int n)
{
    int maxVal = arr[0];

    for (int i = 1; i < n; i++)
        maxVal = max(maxVal, arr[i]);

    return maxVal;
}

int main()
{
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element: " << getMin(arr, n) << '\n';
    cout << "Maximum element: " << getMax(arr, n);

    return 0;
}