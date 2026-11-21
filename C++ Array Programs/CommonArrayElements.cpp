#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr1[] = {1, 45, 54, 71, 76, 12};
    int arr2[] = {1, 7, 5, 4, 6, 12};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Sort both arrays
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    vector<int> common;

    // Find common elements
    set_intersection(arr1, arr1 + n1,
                      arr2, arr2 + n2,
                      back_inserter(common));

    for (int x : common)
        cout << x << " ";

    return 0;
}