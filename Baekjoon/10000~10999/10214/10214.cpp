#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;

    while (T--) {
        int sum_y = 0, sum_k = 0;

        for (int i = 0; i < 9; ++i) {
            int Y, K;
            cin >> Y >> K;
            
            sum_y += Y;
            sum_k += K;
        }

        if (sum_y > sum_k) cout << "Yonsei\n";
        else if (sum_y < sum_k) cout << "Korea\n";
        else cout << "Draw\n";
    }

    return 0;
}