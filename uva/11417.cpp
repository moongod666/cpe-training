#include<iostream>
using namespace std;

int GCD(int a, int b) {
    int t;
    while ( b != 0 ) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    //freopen("input.txt","r",stdin);
    int G = 0, N;
    while(cin >> N) {
        if (N == 0) break;
        G=0;
        for(int i = 1 ; i < N ; i++ ) {
            for( int j = i + 1 ; j<=N ; j++ )
            {
                G+=GCD(i,j);
            }
        }
        cout << G << endl;
    }
}