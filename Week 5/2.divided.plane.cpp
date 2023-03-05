#include <iostream>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    long long s = 0;
    s = p*2;
    for (int i = p+1; i<=n; i++){
        s+=i;
    }
    cout << s;
}
