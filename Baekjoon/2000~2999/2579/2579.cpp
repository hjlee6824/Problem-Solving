#include <bits/stdc++.h>
using namespace std;

int n;
int s[301];
int d[301][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i) cin >> s[i];

    d[1][1] = s[1];
    d[1][2] = 0;
    d[2][1] = s[2];
    d[2][2] = s[1] + s[2];

    for (int i = 3; i <= n; ++i) {
        d[i][1] = max(d[i - 2][1], d[i - 2][2]) + s[i];
        d[i][2] = d[i - 1][1] + s[i];
    }

    cout << max(d[n][1], d[n][2]);
    return 0;
}

// d[i][j]: 연속해서 j개의 계단을 밟고 i번째 계단을 밟았을 때 점수 합의 최댓값
// 테이블을 이렇게 정의하는 이유는 몇 개의 계단을 밟았는지에 대한 정보가 있어야 점화식을 세울 수 있기 때문

// d[k][1]: k번째 계단에 올랐을 때 1개의 계단을 연속해서 밟은 경우
// 1개의 계단을 연속해서 밟았으므로 k-1번째 계단은 밟지 않음
// 즉 k-2번째 계단을 밟고 k번째 계단에 오른 경우이며 k-2번째 계단을 밟았을 때는 
// k-2번째 계단을 밟았을 때 점수의 최댓값은 d[k-2][1]과 d[k-2][2] 중 큰 값을 택하여 k번째 계단 값을 더한다

// d[k][2]: k번째 계단에 올랐을 때 2개의 계단을 연속해서 밟은 경우
// 즉 k-1번째 계단은 밟았으며 k-1번째 계단을 밟을 때 1개의 계단을 연속해서 밟은 상태여야 함