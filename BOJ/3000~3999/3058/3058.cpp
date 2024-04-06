#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--) {
        int sum = 0;
        int min = 100;

        for (int i = 0; i < 7; ++i) {
            int input;
            cin >> input;
            if (input % 2 == 0) {
                if (input < min) min = input;
                sum += input;
            }
        }

        cout << sum << ' ' << min << '\n';
    }

    return 0;
}