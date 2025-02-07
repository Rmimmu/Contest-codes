#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> uniqueSticks;

    for (int i = 0; i < n; i++) {
        string stick;
        cin >> stick;

        string reversedStick = stick;
        reverse(reversedStick.begin(), reversedStick.end());


        uniqueSticks.insert(min(stick, reversedStick));
    }


    cout << uniqueSticks.size() << endl;

    return 0;
}

