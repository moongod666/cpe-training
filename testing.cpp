#include<iostream>
using namespace std;
int main() {
    char m[100] = {};

    m[0]+=255;
    printf("%02X", m[0] & 0xff);
    m[0]+=1;
    printf("%02X", m[0] & 0xff);
}