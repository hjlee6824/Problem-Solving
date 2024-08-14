#include <bits/stdc++.h>
using namespace std;

int n, w, h;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> w >> h;

    while (n--) {
        int m;
        cin >> m;
        if (m <= w || m <= h || m <= sqrt(w * w + h * h)) cout << "DA\n";
        else cout << "NE\n";
    }

    return 0;
}