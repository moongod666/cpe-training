#include<iostream>
using namespace std;
int cycle(int x) {
    int count = 0;
    while (true) {
        count++;
        if (x == 1) break;
        if (x % 2 == 0) x /= 2;
        else x = (3 * x) + 1;
    }
    return count;
}

int main() {
    while (true) {
        int x, y, biggest = 0, temp;
        cin >> x; cin >> y;
        int x2 = x, y2 = y;
        if (y < x) swap(x, y);
        for (int count = x ; count <= y ; count++) {
            temp = cycle(count);
            biggest = max(biggest, temp);
        }

        printf("%d %d %d\n", x2, y2, biggest);
    }
}