#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 11;

    // Finding largest using compound expressions
    if (a >= b && a >= c)
        cout << a;
    else if (b >= a && b >= c)
        cout << b;
    else
        cout << c;

    return 0;
}