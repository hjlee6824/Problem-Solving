#include <bits/stdc++.h>
using namespace std;

int n;
int dp[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        int input;
        cin >> input;
        dp[i] = max(dp[i - 1] + input, input);
    }

    cout << *max_element(dp + 1, dp + n + 1);
    return 0;
}

// dp[i]: i번째 항으로 끝나는 연속합 중 최댓값
// i번째까지의 합은 i-1번째까지의 합에 i번째 수를 더한 것이 클 수도 있고
// i번째 수를 더하지 않고 i번째 수 자체가 더 클 수도 있다