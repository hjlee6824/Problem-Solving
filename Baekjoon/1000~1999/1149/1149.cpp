#include <bits/stdc++.h>
using namespace std;

int n;
int rgb[1001][3];
int d[1001][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> rgb[i][j];

    d[1][0] = rgb[1][0];
    d[1][1] = rgb[1][1];
    d[1][2] = rgb[1][2];

    for (int i = 2; i <= n; ++i) {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + rgb[i][0];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + rgb[i][1];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + rgb[i][2];
    }

    cout << min({d[n][0], d[n][1], d[n][2]});
    return 0;
}

// 테이블 정의
// d[i][0]: i번째 집까지 칠할 때 비용의 최솟값, i번째 집은 빨강
// d[i][1]: i번째 집까지 칠할 때 비용의 최솟값, i번째 집은 초록
// d[i][2]: i번째 집까지 칠할 때 비용의 최솟값, i번째 집은 파랑

// 점화식
// d[i][0] = min(d[i - 1][1], d[i - 1][2]) + rgb[i][0];
// d[i][1] = min(d[i - 1][0], d[i - 1][2]) + rgb[i][1];
// d[i][2] = min(d[i - 1][0], d[i - 1][1]) + rgb[i][2];