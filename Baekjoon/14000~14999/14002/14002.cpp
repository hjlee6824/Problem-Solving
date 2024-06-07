#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000];
int dp[1000];
int pre[1000]; // 경로 복원용 테이블
deque<int> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; ++i) cin >> a[i];

    fill(dp, dp + n, 1);
    fill(pre, pre + n, -1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[i] > a[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                pre[i] = j;
            }
        }
    }

    int mx = 0, idx = 0;
    for (int i = 0; i < n; ++i) {
        if (mx < dp[i]) {
            mx = dp[i];
            idx = i;
        }
    }

    while (idx != -1) {
        dq.push_front(a[idx]);
        idx = pre[idx];
    }

    cout << dq.size() << '\n';
    
    for (auto x : dq)
        cout << x << ' ';

    return 0;
}

// pre[i]: 현재 인덱스에 부분 수열의 이전항의 위치를 저장