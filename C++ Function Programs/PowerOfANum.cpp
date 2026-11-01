#include <iostream>
using namespace std;

long long power(int x, unsigned int n) {
    long long result = 1;

    for (unsigned int i = 0; i < n; i++)
        result *= x;

    return result;
}

int main() {
    int x = 2;
    unsigned int n = 3;

    cout << power(x, n);

    return 0;
}