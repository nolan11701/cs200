#include <iostream>
using namespace std;

// int main(){ 
//     int list[10] = {};
//     for (int i=0,i<11,i++);
//         list[i] = i+1
// }

// int main(){ 
//     int list[10] = {};
//     for (int i=0,i<11,i++){
//         if (i != 4){
//             list[i] = i+1;
//         }    
//     }        

// }
// long long facts[100] = {};

// long long factorial(int n){
//     if (facts[n] > 0) {
//         return facts[n];
//     }
//     facts[0] = 1;
//     facts[1] = 1;
//     if (n==0 || n==1){
//         return 1;
//     } else {
//         for (int i = 2;i<=n; i++){
//             if (facts[i] == 0)
//                 facts[i] = i * facts[i-1];
//         }
//     }
//     return facts[n];
// }
long long fib[100] = {};

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
    return fib[n];
}

int main(){ 
    int n;
    cin >> n;
    cout << fibonacci(n);
}