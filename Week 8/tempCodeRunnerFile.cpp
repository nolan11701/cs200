#include <iostream>
using namespace std;

int main(){
    int xa1, ya1, xa2, ya2;
    int xb1, yb1, xb2, yb2;

    cin >> xa1 >> ya1 >> xa2 >> ya2;
    cin >> xb1 >> yb1 >> xb2 >> yb2;

    int xc1 = min(xa1, xb1);
    int yc1 = min(ya1, yb2);

    int xc2 = max(xa2, xb2);
    int yc2 = max(ya2, yb2);

    int width = xc2 - xc1;
    int height = yc2 - yc1;

    int side = max(width,height);

    cout << side * side;
}