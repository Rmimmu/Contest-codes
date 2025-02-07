
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z = 0;
    cin >> x >> y;

    while (y != 0) {
        z = (z * 10) + (y % 10);
        y /= 10;
    }

    cout << x + z;

    return 0;
}
