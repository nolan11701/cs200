#include <iostream>
using namespace std;

int area(int x_1, int y_1, int x_2, int y_2){
    return (x_2-x_1)*(y_2-y_1);
}

bool intersect(int xa_1, int ya_1, int xa_2, int ya_2, int xc_1, int yc_1, int xc_2, int yc_2){
    return !(xa_1 >= xc_2 || ya_1 >= yc_2 || xa_1 >= xa_2 || yc_1 >= ya_2);
}
int area_intersect(int xa_1, int ya_1, int xa_2, int ya_2, int xc_1, int yc_1, int xc_2, int yc_2){
    int x1_ac = max(xa_1, xc_1);
    int y1_ac = max(ya_1, yc_1);
    int x2_ac = min(xa_2, xc_2);
    int y2_ac = min(ya_2, yc_2);
    return area(x1_ac, y1_ac, x2_ac, y2_ac);
}



                                                                                      
int main(){

    int xa_1, ya_1, xa_2, ya_2;
    int xb_1, yb_1, xb_2, yb_2;
    int xc_1, yc_1, xc_2, yc_2;

    cin >> xa_1 >> ya_1 >> xa_2 >> ya_2;
    cin >> xb_1 >> yb_1 >> xb_2 >> yb_2;
    cin >> xc_1 >> yc_1 >> xc_2 >> yc_2;

    int area_a = area(xa_1, ya_1, xa_2, ya_2);
    int area_b = area(xb_1, yb_1, xb_2, yb_2);

    bool ac_intersect = intersect(xa_1, ya_1, xa_2, ya_2, xc_1, yc_1, xc_2, yc_2);
    bool bc_intersect = intersect(xb_1, yb_1, xb_2, yb_2, xc_1, yc_1, xc_2, yc_2);

    int area = area_a + area_b;

    if (ac_intersect) {
        area -= area_intersect(xa_1, ya_1, xa_2, ya_2, xc_1, yc_1, xc_2, yc_2);
    } 
    if (bc_intersect) {
        area -= area_intersect(xb_1, yb_1, xb_2, yb_2, xc_1, yc_1, xc_2, yc_2);
    }

    cout << area;
}