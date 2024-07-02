#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> n;
        if (n == 0) break;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j)
                cout << '*';
            cout << '\n';
        }
    }

    return 0;
}