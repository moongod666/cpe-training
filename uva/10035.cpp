#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
    while (1) {
        int a, b;
        cin >> a >> b;
        if (a == b && b == 0) break;

        int count = 10, carry_count = 0;
        bool carry = false;

        while (count--) {
            if ((a % 10) + (b % 10) + (int)carry > 9) {
                carry = true;
                carry_count++;
            } else { carry = false; }

            a /= 10;
            b /= 10;
        }
        cout << (carry_count != 0 ? to_string(carry_count) : "No") << " carry operation" << (carry_count > 1 ? "s." : ".") << endl;
    }
}