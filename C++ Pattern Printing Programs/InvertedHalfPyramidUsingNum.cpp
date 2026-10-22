using namespace std;
#include <bits/stdc++.h>
#include <iostream>
int main()
{
    int n=4; // took a default value
    for (int i = n; i >= 1; --i) { // loop for iterating
        for (int j = 1; j <= i; ++j) { // loop for printing
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}