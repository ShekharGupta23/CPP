#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to merge two sorted arrays
vector<int> mergeArrays(const vector<int>& arr1,
                        const vector<int>& arr2)
{
    vector<int> arr3;

    arr3.insert(arr3.end(), arr1.begin(), arr1.end());
    arr3.insert(arr3.end(), arr2.begin(), arr2.end());

    sort(arr3.begin(), arr3.end());

    return arr3;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> result = mergeArrays(arr1, arr2);

    cout << "Merged array: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}