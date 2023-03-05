#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    for (long long i = 1; i<n+1; i++){
        sum += pow(i, i-1);
    }
    cout << sum;
}