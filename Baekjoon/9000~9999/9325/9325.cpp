#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--) {
        int ans = 0;
        int s, n;
        cin >> s >> n;
        ans += s;

        while (n--) {
            int q, p;
            cin >> q >> p;
            ans += q * p;
        }

        cout << ans << '\n';
    }

    return 0;
}