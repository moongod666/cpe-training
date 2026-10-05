#include<iostream>

using namespace std;

int main () {
    freopen("input.txt", "r", stdin);
    int count;
    cin >> count;
   for (int x = 0; x < count; x++) {
        int a, b;
        cin >> a >> b;
        long long sum = 0;
        for (int i = a; i <= b; i++) {
            if (i % 2 != 0) sum += i;
        }
       cout << "Case " << x+1 << ": " << sum << endl;
    }
}