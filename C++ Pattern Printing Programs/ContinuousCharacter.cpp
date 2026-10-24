#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    char character = 'A';

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << character << " ";
            character++;
        }

        cout << '\n';
    }

    return 0;
}