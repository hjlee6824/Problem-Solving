#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = n - 1; i >= 0; --i) {
        if (a[i] <= a[i - 1]) {
            ans += a[i - 1] - a[i] + 1;
            a[i - 1] = a[i] - 1;
        }
    }

    cout << ans;
    return 0;
}