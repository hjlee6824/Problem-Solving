#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
    }

    cout << dp[n];
    return 0;
}

// dp[i]: 길이가 i인 2진 수열의 가짓수
// 1자리를 채우는 경우의 수: 1 (1)
// 2자리를 채우는 경우의 수: 2 (11, 00)
// n자리를 채우는 경우의 수: dp[n - 1] + dp[n - 2]