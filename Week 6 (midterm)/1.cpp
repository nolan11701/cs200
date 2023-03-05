#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    double m = 0;
    for (double i=1; i<n+1; i++){
        m+=1/i;
    }
    printf("%.6f\n", m);
}