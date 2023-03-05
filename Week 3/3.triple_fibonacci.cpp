#include <iostream>
using namespace std;

long long fib[100] = {};

long long tribple_fibonacci(int n){
    if (fib[n] > 0) {
        return fib[n];
    }
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 1;
    if (n>2) {
        for (int i = 3;i<=n; i++){
            if (fib[i] == 0)
                fib[i] = fib[i-1]+fib[i-2]+fib[i-3];
        }
    }
    return fib[n] ;
}

int main(){
    int n;
    cin >> n;
    cout << tribple_fibonacci(n-1);
}