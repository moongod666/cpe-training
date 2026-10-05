#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
    int n;
    while(cin >> n) {
        vector<int> m(n);
        for (int i = 0 ; i < n ; i++ ) cin >> m[i];
        vector<bool> diff(n-1, false);

        bool is_Jolly = true;
        for (int i = 0 ; i < n-1 ; i++ ) {
            int d = abs(m[i] - m[i+1]) - 1;
            if(d < n) diff[d] = true;
            else {
                is_Jolly = false;
                break;
            }
        }
        for (bool b : diff) is_Jolly = b && is_Jolly;
        cout << (is_Jolly ? "J" : "Not j") << "olly" << endl;
    }
}