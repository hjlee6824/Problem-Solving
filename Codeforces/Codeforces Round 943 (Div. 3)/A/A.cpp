#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int mx = 0, ans = 0;
        for (int y = 1; y < x; ++y) {
            if (mx < gcd(x, y) + y) {
                mx = gcd(x, y) + y;
                ans = y;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}