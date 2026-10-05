#include<iostream>
using namespace std;
int main() {
    string input;
    bool is_first = true;
    while (getline(cin, input)) {
        for (const char c : input) {
            if (c == '\"') {
                if (is_first) cout << "``";
                else cout << "''";
                is_first = !is_first;
            } else {
                cout << c;
            }
        }
        cout << endl;
    }
}