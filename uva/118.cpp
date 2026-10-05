#include<iostream>
using namespace std;
int main() {
    char facing = 0x00; // 00-S 01-E 10-N 11-W
    int x = 0, y = 0;
    string eng_facing;
    string input;
    int lost[100][2] = {};
    int b_x, b_y;
    cin >> b_x >> b_y;
    cin >> x >> y >> eng_facing;
    cin >> input;

    if (eng_facing == "S") facing = 0x00;
    else if (eng_facing == "N") facing = 0x02;
    else if (eng_facing == "E") facing = 0x01;
    else if (eng_facing == "W") facing = 0x03;

    for (char c : input) {
        if (x > b_x || y > b_y) break;
        switch(c) {
            case 'R': {
                if (facing == 0x00) facing = 0x03;
                else facing--;
                break;
            }

            case 'L': {
                if (facing == 0x03) facing = 0x00;
                else facing++;
                break;
            }

            case 'F': {
                int a = (facing >> 1 & 1) ? -1 : 1;
                if (facing & 1) //x軸的
                    x += a;
                else y += a;
                break;
            }

            default:
             break;
        }
    }

    if (facing == 0x00) eng_facing = "S";
    if (facing == 0x01) eng_facing = "E";
    if (facing == 0x02) eng_facing = "N";
    if (facing == 0x03) eng_facing = "W";

    printf("%d %d %s", x, y, eng_facing.c_str());
}