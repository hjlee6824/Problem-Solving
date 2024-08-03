#include <bits/stdc++.h>
using namespace std;

int n;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int input;
        cin >> input;
        if (i != input) ++ans;
    }

    cout << ans;
    return 0;
}