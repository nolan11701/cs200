#include <iostream>
using namespace std;

int bunny_ears(int n) {
    if (n <= 1){
        return 2;
    }
    return 2 + bunny_ears(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << bunny_ears(n);

}