#include <iostream>
using namespace std;

void printDiamond(int n)
{
    // Print the upper half
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }

    // Print the lower half
    for (int i = n - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }
}

int main()
{
    int n = 5;

    printDiamond(n);

    return 0;
}