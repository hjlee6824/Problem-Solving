#include <bits/stdc++.h>
using namespace std;

int t;
int a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    while (t--) {
        cin >> a >> b;
        cout << lcm(a, b) << ' ' << gcd(a, b) << '\n';
    }

    return 0;
}