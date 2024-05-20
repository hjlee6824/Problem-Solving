#include <bits/stdc++.h>
using namespace std;

int n;
int s[301];
int d[301];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i) cin >> s[i];

    d[1] = s[1];
    d[2] = s[1] + s[2];
    d[3] = max(s[1], s[2]) + s[3];

    for (int i = 4; i <= n; ++i)
        d[i] = max(d[i - 2], d[i - 3] + s[i - 1]) + s[i];

    cout << d[n];
    return 0;
}

// d[i]: i번째 계단까지 올라섰을 때 점수 합의 최댓값
// 단, i번째 계단은 반드시 밟아야 함
// i번째 계단을 반드시 밟아야 하므로 이전에 연속해서 밟은 계단이 2개면 안됨
// 즉, i-2번째까지 계단을 밟고 i번째 계단을 밟거나
// i-3번째 계단까지 밟고 i-1번째 계단을 밟고 i번째 계단을 밟는 경우 중 최댓값을 택한다