#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x < y) cout << "NO BRAINS\n";
        else cout << "MMM BRAINS\n";
    }

    return 0;
}