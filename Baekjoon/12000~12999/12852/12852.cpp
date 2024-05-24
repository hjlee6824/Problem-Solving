#include <bits/stdc++.h>
using namespace std;

int n;
int d[1000001];
int pre[1000001]; // 경로 추적용 테이블

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    d[1] = 0;
    pre[1] = 0;

    for (int i = 2; i <= n; ++i) {
        d[i] = d[i - 1] + 1;
        pre[i] = i - 1;

        if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
            d[i] = d[i / 3] + 1;
            pre[i] = i / 3;
        }

        if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
            d[i] = d[i / 2] + 1;
            pre[i] = i / 2;
        }
    }

    cout << d[n] << '\n';

    int cur = n;
    while (cur != 0) {
        cout << cur << ' ';
        cur = pre[cur];
    }

    return 0;
}

// N을 1로 만드는 방법에 포함되는 수들을 출력해야 하므로
// 이를 또 다른 테이블에 저장해두어야 함