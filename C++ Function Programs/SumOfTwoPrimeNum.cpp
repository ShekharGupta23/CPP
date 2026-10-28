#include <iostream>
#include <cmath>
using namespace std;

// Checks whether a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Checks whether N can be expressed as
// the sum of two prime numbers
bool isPossible(int N)
{
    return isPrime(N) && isPrime(N - 2);
}

int main()
{
    int N = 13;

    if (isPossible(N))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}