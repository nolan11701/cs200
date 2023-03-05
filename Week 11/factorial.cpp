#include <iostream>
using namespace std;

long long fact[100];
int comps;
long long factorial(int n) {
    comps += 1;
    if (fact[n] != 0) {
        return fact[n];
    } else {
        if (n == 0) {
            fact[n] = 1;
            return 1;
        } else {
            long long toReturn = n * factorial(n - 1);
            fact[n] = toReturn;
            return toReturn;
        }
    }
}

int main() {
    cout << factorial(5) << " " << comps;
    cout << factorial(10) << " " << comps;
}