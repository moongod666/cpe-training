#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

long long step(int x, int y) {

    long long sum = 0;
    for (int i = 1; i <= (x + y) ; i++) {
        sum += i;
    }
    return sum + x;
}

int main() {

    int count = 0;
    cin >> count;
    for (int i = 0; i < count; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << "Case " << i+1 << ": " << abs(step(x1, y1) - step(x2, y2)) << endl;
    }
}