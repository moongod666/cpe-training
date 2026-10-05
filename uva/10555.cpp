#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    int count = 0;
    string enter;
    cin >> count;
    cin.ignore();
    getline(cin, enter);
    while (count--) {
        string name;
        map<string, int> total;
        while(getline(cin, name)) {
            if(name.empty()) break;
            total[name]++;
        }
        int sum = 0;
        for (auto &[s, n] : total) {
            sum += n;
        }
        for (auto &[s, n] : total) {
            cout << s;
            printf( " %.04f\n", ((double)n/sum )* 100.00 );
        }
    }
}