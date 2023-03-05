#include <iostream>
using namespace std;

string f(int n) {
    if (n == 0){
        return " fish";
    }
    return " hug" + f(n-1) + " me";
}

int main(){
    int a;
    cin >> a;
    cout << "dog" + f(a);
}