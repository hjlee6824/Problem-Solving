#include <bits/stdc++.h>
using namespace std;

int n;
int a[1001];
int dp[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        dp[i] = a[i];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            dp[i] = max(dp[j] + dp[i - j], dp[i]);
        }
    }

    cout << dp[n];
    return 0;
}

// dp[i]: i장의 카드를 구매했을 때 지불할 금액의 최댓값