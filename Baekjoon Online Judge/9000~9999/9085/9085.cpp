#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int sum = 0;
        for (int i = 0; i < N; ++i) {
            int input;
            cin >> input;
            sum += input;
        }

        cout << sum << '\n';
    }

    return 0;
}