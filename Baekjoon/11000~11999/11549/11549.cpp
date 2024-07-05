#include <bits/stdc++.h>
using namespace std;

int t;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    for (int i = 0; i < 5; ++i) {
        int input;
        cin >> input;
        if (input == t) ++ans;
    }

    cout << ans;
    return 0;
}