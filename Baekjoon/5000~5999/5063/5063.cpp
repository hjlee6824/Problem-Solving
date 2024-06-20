#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        int r, e, c;
        cin >> r >> e >> c;

        if (r < e - c) cout << "advertise\n";
        else if (r > e - c) cout << "do not advertise\n";
        else cout << "does not matter\n";
    }

    return 0;
}