#include <iostream>

using namespace std;

// int main(){
//     auto n = [](int a){
//         if (a%2 = 0){
//             return 2;
//         } else {
//             return 1;
//         }
//     };
//     auto d = [](int b){
//         return d*2;
//     };
// }

int fib(int n){
    if (n<=1){
        return 1; 
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    cout << fib(20);
}