#include<iostream>
#include<map>
using namespace std;
int compute(int d, int td) {
    int diff = 0;
    if (d <= td) diff = td - d;
    else return (7 - ((d - td) % 7))% 7;
        return diff % 7;
}

int main() {
    freopen("input.txt", "r", stdin);
    string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    map<int, int> doom = {{12, 12}, {4, 4},
        {6, 6}, {8, 8},
        {10, 10}, {5, 9},
        {9, 5}, {7, 11},
        {11, 7}, {1, 10},
        {2, 21}, {3, 28}};

    int m, d, count;
    cin >> count;
    while (count--) {
        cin >> m >> d;
        cout << week[compute(doom[m], d)] << endl;
    }
}