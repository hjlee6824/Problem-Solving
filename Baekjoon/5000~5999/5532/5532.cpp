#include <bits/stdc++.h>
using namespace std;

int l, a, b, c, d;
int x, y;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> a >> b >> c >> d;
    x = ((a % c == 0) ? (a / c) : (a / c + 1));
    y = (b % d == 0 ? (b / d) : (b / d + 1));
    ans = l - max(x, y);
    
    cout << ans;
    return 0;
}