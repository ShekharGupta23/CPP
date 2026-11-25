#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n <= 1)
        return n;

    int temp[n];
    int j = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    }

    // Store the last element
    temp[j++] = arr[n - 1];

    // Copy unique elements back to the original array
    for (int i = 0; i < j; i++)
        arr[i] = temp[i];

    return j;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}