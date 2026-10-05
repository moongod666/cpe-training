#include<iostream>
#include<cmath>
using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
    double px1, py1, px2, py2, px3, py3, px4, py4;
    while (cin >> px1 >> py1 >> px2 >> py2 >> px3 >> py3 >> px4 >> py4) {
        double x, y;
        if (px1 == px3 && py1 == py3) {
            x = px2 + px4 - px1;
            y = py2 + py4 - py1;
        } else if (px1 == px4 && py1 == py4) {
            x = px2 + px3 - px1;
            y = py2 + py3 - py1;
        } else if (px2 == px3 && py2 == py3) {
            x = px1 + px4 - px2;
            y = py1 + py4 - py2;
        } else {
            x = px1 + px3 - px2;
            y = py1 + py3 - py2;
        }


        printf("%.03f %.03f\n",x, y);
    }
}