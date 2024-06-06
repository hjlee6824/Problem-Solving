#include <bits/stdc++.h>
using namespace std;

int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;

    for (int i = 0; i < 10; ++i) {
        int a, b;
        cin >> a >> b;
        sum -= a;
        sum += b;
        ans = max(sum, ans);
    }

    cout << ans;
    return 0;
}