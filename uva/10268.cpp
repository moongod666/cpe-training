#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
    int x;
    while (cin >> x) {
        vector<long long> poly = {};
        string poly_str, enter;
        getline(cin, enter);
        getline(cin, poly_str);
        long positive = 1, temp = 0, count = 0;
        for (char &c : poly_str) {

            if (c == ' ' || &c == &poly_str.back()) {
                poly.push_back(temp * positive);
                positive = 1;
                temp = count = 0;
                continue;
            }
            if (c == '-') {
                positive = -1;
                continue;
            }
            temp *= (long long) pow(10, count);
            temp += (c - '0');
            count++;
        }
        reverse(poly.begin(), poly.end());
        int index = 0;
        for (long long &n : poly) {
            n *= index;
            index++;
        }
        index = -1;
        long long ans = 0;
        for (long long n : poly) {
            ans += ((long long) pow(x, index)) * n;
            index++;
        }
        cout << ans << endl;
    }
}