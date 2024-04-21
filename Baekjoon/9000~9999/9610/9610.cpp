#include <bits/stdc++.h>
using namespace std;

int n;
int ans[5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;
    
        if (x > 0 && y > 0) ++ans[0];
        if (x < 0 && y > 0) ++ans[1];
        if (x < 0 && y < 0) ++ans[2];
        if (x > 0 && y < 0) ++ans[3];
        if (x == 0 || y == 0) ++ans[4];
    }

    cout << "Q1: " << ans[0] << '\n';
    cout << "Q2: " << ans[1] << '\n';
    cout << "Q3: " << ans[2] << '\n';
    cout << "Q4: " << ans[3] << '\n';
    cout << "AXIS: " << ans[4] << '\n';

    return 0;
}