#include <bits/stdc++.h>
using namespace std;

int n;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < 3; ++i) {
        int input;
        cin >> input;
        ans += min(n, input);
    }

    cout << ans;
    return 0;
}