#include <bits/stdc++.h>
using namespace std;

int cnt[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;

    while (!cin.eof()) {
        getline(cin, str);

        for (auto ch : str) {
            if (ch == ' ') continue;
            ++cnt[ch - 'a'];
        }       
    }

    int mx = 0;
    for (int i = 0; i < 26; ++i)
        mx = max(mx, cnt[i]);

    for (int i = 0; i < 26; ++i)
        if (cnt[i] == mx)
            cout << (char)(i + 'a');

    return 0;
}