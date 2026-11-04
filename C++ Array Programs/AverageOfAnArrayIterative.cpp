#include <iostream>
using namespace std;

// Function to find average of an array
double average(int arr[], int n)
{
    if (n == 0)
        return 0;

    long long sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return static_cast<double>(sum) / n;
}

int main()
{
    int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << average(arr, n) << endl;

    return 0;
}