#include <bits/stdc++.h>
using namespace std;

int n, m;
int menu[11];
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> menu[i];

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int input;
        cin >> input;
        ans += menu[input];
    }

    cout << ans;
    return 0;
}