#include <iostream>
using namespace std;

long long x = 1e9+7;
long long num[1000000]={};

long long f(int n) {
    
    if (num[n]!=0){
        return num[n];
    } else {
        if (n<2){
            num[n]=1;
            return 1;  
        } else {
            long long toreturn = (3 * f(n-1) + 2 * f(n-2))%x;
            num[n] = toreturn;
            return toreturn;
        }
    }
}

int main() {
    long long n;
    cin >> n;
    cout << f(n);
}