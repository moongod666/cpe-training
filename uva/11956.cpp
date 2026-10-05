#include <array>
#include <iostream>
using namespace std;
int main() {
    freopen("input.txt", "r", stdin);
    int counter = 0;
    int counter2 = 0;
    cin >> counter;
    if (counter == 0) return 0;
    for (; counter > 0; counter--) {
        counter2++;
        array<uint8_t, 100> memory{};
        string input;
        int pointer = 99;
        cin >> input;
        for (char c : input) {
            switch (c) {
                case '.':
                    break;

                case '+':
                    if ((int)memory[pointer] == 255) memory[pointer] = 0;
                    else memory[pointer]++;
                    break;

                case '-':
                    if ((int)memory[pointer] == 0) memory[pointer] = 255;
                    else memory[pointer]--;
                    break;

                case '>':
                    if (pointer == 0) pointer = 99;
                    else pointer--;
                    break;

                case '<':
                    if (pointer == 99) pointer = 0;
                    else pointer++;
                    break;
            }
        }
        cout << endl;
        cout << endl;
        cout << "Case " << counter2 << ": ";
        for (int i = sizeof(memory)-1 ; i >= 0 ; i--) printf("%02X ", memory[i]);
    }
}