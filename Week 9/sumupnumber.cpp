#include <iostream>
using namespace std;

int sumup(int n) {
    if (n == 0){
        return 0;
    }
    return n%10+sumup(n/10);
}
// 123 1 + 2 +3 

int main(){
    int n;
    cin >> n;
    cout << sumup(n);

}