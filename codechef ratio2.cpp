#include <bits/stdc++.h>

using namespace std;

int min_op(int x, int y) {
    int op = 0;

    while (x < 2*y && y < 2*x) {
        if (x > y) {
            y--;
        } else {
            x--;
        }
        op++;
    }

    return op;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << min_op(X, Y) << endl;
    }

    return 0;
}

