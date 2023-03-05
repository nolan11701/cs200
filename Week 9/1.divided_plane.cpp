#include <iostream>
using namespace std;

int f(int n, int p) {
    if (n == p){
        return 2*p;
    }
    return n+f(n-1, p);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << f(a,b);

}