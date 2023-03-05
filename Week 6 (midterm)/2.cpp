
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long m = 0;
    for (int i = 0; i<n+1; i++){
        m+=i;
    }
    cout << m;
}