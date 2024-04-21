#include <bits/stdc++.h>
using namespace std;

int T, n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--) {
        cin >> n;
        int tmp = n, idx = 0;
        while (tmp != 0) {
            if (tmp % 2 == 1) cout << idx << ' ';
            tmp /= 2;
            ++idx;
        }
    }

    return 0;
}