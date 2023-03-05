#include <iostream>
using namespace std;

long long g(int x, int y){
    if (x<=0 or y<=0){
        return 1;
    }
    return g(x-1, y) + 2*g(x-1, y-1) + 3*g(x, y-1);
}
int main(){
    int c, d;
    cin >> c >> d;
    cout << g(c, d);
}