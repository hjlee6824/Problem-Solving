#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, p;
int x, y;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c >> d >> p;

    x = a * p;
    if (p > c) y = b + (p - c) * d;
    else y = b;

    cout << min(x, y);
    return 0;
}