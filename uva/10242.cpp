#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double px1, py1, px2, py2, px3, py3, px4, py4;
    while (cin >> px1 >> py1 >> px2 >> py2 >> px2 >> py2 >> px3 >> py3) {
        px4 = px1 + (px3 - px2);
        py4 = py1 + (py3 - py2);

        printf("%.03f %.03f\n",px4, py4);
    }
}