#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            if (i == 1 || i == n) {
                for (int j = 1; j <= n; ++j) cout << '#';
            }
            else {
                cout << '#';
                for (int j = 2; j <= n - 1; ++j) cout << 'J';
                cout << '#';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}