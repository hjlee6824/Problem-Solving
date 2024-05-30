#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1001][10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < 10; ++i) dp[1][i] = 1;

    for (int i = 2; i <= n; ++i)
        for (int j = 0; j < 10; ++j)
            for (int k = j; k < 10; ++k)
                dp[i][j] += dp[i - 1][k] % 10007;

    int ans = 0;
    for (int i = 0; i < 10; ++i) ans += dp[n][i];

    cout << ans % 10007;
    return 0;
}

// 테이블 정의
// dp[i][j]: 길이가 i인 수의 시작 수가 j일 때의 오르막 수의 개수