#include<iostream>
using namespace std;

int main () {
    freopen("input.txt", "r", stdin);
    int n;
    while (cin >> n) {
        int total = n, e = n, new_d = 0;
        while (e >= 3) {
            new_d = e / 3;
            total += new_d;
            e = new_d + e % 3;
        }
        if (e % 3 == 2) total ++;

        cout << total << endl;
    }
}