#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--) {
        int idx;
        string str;
        cin >> idx >> str;

        str[idx - 1] = '-';

        for (auto ch : str) {
            if (ch == '-') continue;
            cout << ch;
        }

        cout << '\n';
    }

    return 0;
}