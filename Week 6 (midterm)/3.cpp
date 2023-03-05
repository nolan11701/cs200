#include <iostream>
using namespace std;


long long num[100] = {};

long long fibonacci(int n){
    if (num[n] > 0) {
        return num[n];
    }
    num[0] = 0;
    num[1] = 1;
    num[2] = 1;
    if (n==0 || n==1 || n==2){
        return 1;
    } else {
        for (int i = 3;i<=n; i++){
            if (num[i] == 0)
                num[i] = num[i-1] + 2 * num[i-2] + num[i-3];
        }
    }
    return num[n];
}

int main(){ 
    //testing
    int n;
    cin >> n; 
    
    cout << fibonacci(n-1);
}