#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int sum(string str) {
    int s = 0;
    for (char c : str) {
        s += c - '0';
    }
    if (s < 10) return s;
    else return sum(to_string(s));
}


int main() {
    freopen("input.txt", "r", stdin);
    string in;
    while (true) {
        cin >> in;
        if (in == "0") break;
        cout << sum(in) << endl;
    }
}