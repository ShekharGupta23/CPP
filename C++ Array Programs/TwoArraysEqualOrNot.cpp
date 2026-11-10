#include <iostream>
#include <algorithm>
using namespace std;

bool checkArrays(int arr1[], int arr2[], int n, int m)
{
    // Arrays with different sizes cannot be equal
    if (n != m)
        return false;

    // Sort both arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    // Compare corresponding elements
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    if (checkArrays(arr1, arr2, n, m))
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}