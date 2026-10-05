#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int main() {
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
        printf( "%s %.04f\n", s.c_str(), (double)n/sum * 100.00 );
    }
}