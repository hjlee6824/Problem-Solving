#include <bits/stdc++.h>
using namespace std;

int n;
int arr[501][501];
int dp[501][501];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            cin >> arr[i][j];

    dp[1][1] = arr[1][1];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];

    cout << *max_element(dp[n] + 1, dp[n] + 1 + n);
    return 0;
}