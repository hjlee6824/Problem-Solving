#include <bits/stdc++.h>
using namespace std;

int e, s, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> e >> s >> m;

    int a = 1, b = 1, c = 1, year = 1;

    while (true) {
        if (a == e && b == s && c == m) break;
        a = ((a + 1) > 15) ? 1 : (a + 1);
        b = ((b + 1) > 28) ? 1 : (b + 1);
        c = ((c + 1) > 19) ? 1 : (c + 1);
        ++year;
    }

    cout << year;
    return 0;
}