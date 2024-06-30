#include <bits/stdc++.h>
using namespace std;

int r, c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> r >> c;

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            cout << '*';
        cout << '\n';
    }

    return 0;
}