#include <bits/stdc++.h>
using namespace std;

int n;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        int w, h;
        cin >> w >> h;

        if (w == 136) ans += 1000;
        else if (w == 142) ans += 5000;
        else if (w == 148) ans += 10000;
        else ans += 50000;
    }

    cout << ans;
    return 0;
}