#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int a, b;
        cin >> a >> b;
        cout << "Case " << i << ": " << a + b << '\n';
    }

    return 0;
}