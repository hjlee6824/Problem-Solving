#include <bits/stdc++.h>
using namespace std;

int N, K;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;

    int ans = 0;
    for (int i = 1; i <= K; ++i) {
        string str = to_string(N * i);
        reverse(str.begin(), str.end());
        int tmp = stoi(str);
        if (ans < tmp) ans = tmp;
    }

    cout << ans;
    return 0;
}