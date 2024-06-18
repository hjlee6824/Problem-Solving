#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        cout << x;
        if (x % 2 == 0) cout << " is even\n";
        else cout << " is odd\n";
    }

    return 0;
}