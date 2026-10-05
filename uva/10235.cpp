
#include<iostream>
#include<cmath>
#include <math.h>

using namespace std;
bool is_prime(int a) {
    bool find = true;
    for (int i = 2 ;  i <= sqrt(a); i++) {
        if (a % i == 0) find = false;
    }
    return find;
}

int main() {
    int a;
    while (cin >> a) {
        if (!is_prime(a)) cout << a << " is not prime" << endl;
        else {
            int reverse = 0;
            int temp = a, count = -1;

            while (temp > 0) {
                count++;
                temp /= 10;
            }
            temp = a;
            for (int i = 0 ;;i++) {
                if (temp == 0) break;
                reverse += (temp % 10) * (int) pow(10, count - i);
                temp /= 10;
            }
            if (a == reverse || !is_prime(reverse)) cout << a << " is prime" << endl;
            else cout << a << " is emirp" << endl;
        }
    }
}