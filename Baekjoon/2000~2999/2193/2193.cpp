#include <bits/stdc++.h>
using namespace std;

int n;
long long dp[91][2];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    dp[1][0] = 0;
    dp[1][1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
        dp[i][1] = dp[i - 1][0];
    }

    cout << dp[n][0] + dp[n][1];
    return 0;
}

// d[i][j]: i자리 이친수의 개수, 단 마지막이 j로 끝나는

// 맨 처음은 반드시 1이어야 함
// 0이 나오면 다음 수는 0 또는 1이 나올 수 있음
// 1이 나오면 다음 수는 반드시 0이 와야 함

// d[i][0] = d[i - 1][0] + d[i - 1][1];
// d[i][1] = d[i - 1][0];

// 10001 10010 10100 10101 10000