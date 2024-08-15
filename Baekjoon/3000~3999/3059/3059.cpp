#include <bits/stdc++.h>
using namespace std;

int t;
int a[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--) {
        int ans = 0;
        fill(a, a + 26, 0);

        string str;
        cin >> str;

        for (auto ch : str) a[ch - 'A'] = 1;

        for (int i = 0; i < 26; ++i)
            if (a[i] == 0) ans += i + 'A';

        cout << ans << '\n';
    }

    return 0;
}