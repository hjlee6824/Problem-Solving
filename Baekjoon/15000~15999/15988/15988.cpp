#include <bits/stdc++.h>
using namespace std;

int t;
long long dp[1000001];
int mod = 1e9 + 9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    dp[1] = 1; // 1
    dp[2] = 2; // 1 + 1, 2
    dp[3] = 4; // 1 + 1 + 1, 1 + 2, 2 + 1, 3

    for (int i = 4; i <= 1000000; ++i)
        dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % mod;

    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}

// dp[i]: i를 1, 2, 3의 합으로 나타내는 경우의 수