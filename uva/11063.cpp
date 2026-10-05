#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main() {
    //freopen("input.txt", "r", stdin);
    int t;
    int count = 0;
    while (cin >> t) {
        count++;
        map<string, int> sum;
        vector<int> b(t);
        bool is_B2 = true;
        for (int i = 0 ; i < t ; i++) {
            cin >> b[i];
            if ( (i !=0 && b[i] <= b[i-1]) || b[i] <= 0) is_B2 = false;
        }

        string temp;
        for (int i = 0; i < t && is_B2; i++) {
            for (int x = 0 ; x <= i && is_B2; x++) {
                //if (i == x) continue;
                temp = to_string(b[i] + b[x]);
                if (sum[temp] == 1) is_B2 = false;
                sum[temp] ++;
            }
        }
        cout << "Case #" << count << ": It is" << (is_B2 ? " " : " not ") <<"a B2-Sequence.\n\n";
    }
}