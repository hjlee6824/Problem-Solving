#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
int dp[1000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; ++i) cin >> a[i];

    fill(dp, dp + n, 1);

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);

    cout << *max_element(dp, dp + n);
    return 0;
}

// dp[i]: i번째 항을 마지막으로 하는 가장 긴 증가하는 부분 수열의 길이