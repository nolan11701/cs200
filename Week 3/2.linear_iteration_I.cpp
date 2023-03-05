#include <iostream>
using namespace std;

long long fib[100] = {};
long long c = 1e9+7;

long long fibonacci(int n){
    if (fib[n] > 0) {
        return fib[n];
    }
    fib[0] = 1;
    fib[1] = 1;
    if (n==0 || n==1){
        return 1;
    } else {
        for (int i = 2;i<=n; i++){
            if (fib[i] == 0)
                fib[i] = fib[i-1]+fib[i-2];
        }
    }
    return fib[n] ;
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n)%c;
}