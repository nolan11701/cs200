#include <iostream>

using namespace std;
long long num[1000000] = {};

long long tile(int n){
    if (num[n]!=0){
        return num[n];
    } else {
        if (n == 1){
            num[n]=1;
            return 1;  
        }
        if (n == 2){
            num[n]=3;
            return 3;
        } else {
            long long toreturn = (tile(n-1) + 2*tile(n-2))%12345;
            num[n] = toreturn;
            return toreturn;
        }
        
    }
}
int main() {
    int n;
    cin >> n;
    cout << tile(n);
}