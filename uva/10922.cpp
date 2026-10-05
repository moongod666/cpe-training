#include<iostream>
using namespace std;

bool is_nine(const string &str, int& count) {
    count++;
    int sum = 0;
    for (char c : str) {
        sum += c - '0';
    }
    if (sum > 9) return is_nine(to_string(sum), count);
    if (sum == 9) return true;
    return false;
}


int main() {
    freopen("input.txt", "r", stdin);
    string input;
    while ( cin >> input ) {
        if (input == "0") break;
        int counter = 0;
        if (is_nine(input, counter)) cout << input << " is a multiple of 9 and has 9-degree " << counter << "." << endl;
        else cout << input << " is not a multiple of 9." << endl;
    }
}