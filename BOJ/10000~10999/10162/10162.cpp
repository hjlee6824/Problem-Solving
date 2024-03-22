#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    if (T % 10 != 0) {
        cout << -1;
    } else {
        int A = T / 300;
        T -= A * 300;

        int B = T / 60;
        T -= B * 60;

        int C = T / 10;

        cout << A << ' ' << B << ' ' << C;
    }

    return 0;
}