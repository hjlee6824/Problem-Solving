#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string id;
    cin >> id;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << ':';
            if (i == 1 && j == 1) cout << id;
            else cout << "fan";
            cout << ':';
        }
        cout << '\n';
    }

    return 0;
}