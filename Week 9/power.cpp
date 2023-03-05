#include <iostream>
using namespace std;

long long p(long long a, long long b) {
    if (b == 1){
        return a;
    }
    return a*p(a,b-1);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << p(a,b);

}