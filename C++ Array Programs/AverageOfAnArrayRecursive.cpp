#include <iostream>
using namespace std;

// Recursively calculates the sum
long long sumRec(int arr[], int i, int n)
{
    if (i == n)
        return 0;

    return arr[i] + sumRec(arr, i + 1, n);
}

// Function to find average of an array
double average(int arr[], int n)
{
    if (n == 0)
        return 0;

    return static_cast<double>(sumRec(arr, 0, n)) / n;
}

int main()
{
    int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << average(arr, n) << endl;

    return 0;
}