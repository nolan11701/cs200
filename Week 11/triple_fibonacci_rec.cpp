#include <iostream>
using namespace std;

long long fib[100] = {};

long long tribple_fibonacci(int n) {
    if (fib[n] != 0) {
        return fib[n];
    } else {
        if (n <= 3) {
            fib[n] = 1;
            return 1;
        } else {
            long long toReturn = tribple_fibonacci(n - 1) +
                                 tribple_fibonacci(n - 2) +
                                 tribple_fibonacci(n - 3);
            fib[n] = toReturn;
            return toReturn;
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << tribple_fibonacci(n);
}
