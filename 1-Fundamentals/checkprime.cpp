#include <iostream>
using namespace std;

int main() {
    long long int i, n;
    bool isPrime = true;

    cin >> n;

    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout <<"Prime";
    else
        cout <<"Not Prime";

    return 0;
}