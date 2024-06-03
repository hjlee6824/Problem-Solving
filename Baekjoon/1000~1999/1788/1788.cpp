#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1000001];
const int mod = 1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    dp[0] = 0;
    dp[1] = 1; // dp[-1]

    if (n > 0) {
        for (int i = 2; i <= n; ++i)
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
    }
    else {
        n = abs(n);
        for (int i = 2; i <= n; ++i) // dp[-2]부터 구하는 것과 같음
            dp[i] = (dp[i - 2] - dp[i - 1]) % mod;
    }

    cout << ((dp[n] > 0) ? 1 : ((dp[n] == 0) ? 0 : -1)) << '\n' << abs(dp[n]);
    return 0;
}

// n이 양수, 음수인 모든 경우에 대해 구할 필요가 없음
