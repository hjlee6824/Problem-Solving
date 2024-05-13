#include <bits/stdc++.h>
using namespace std;

int t;
int d[11]; // d[i]: i를 1, 2, 3의 합으로 나타내는 경우의 수

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    d[1] = 1; d[2] = 2; d[3] = 4;

    for (int i = 4; i <= 10; ++i)
        d[i] = d[i - 3] + d[i - 2] + d[i - 1];

    while (t--) {
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }

    return 0;
}

// d[1] -> 1 (1가지)
// d[2] -> 1+1, 2 (2가지)
// d[3] -> 1+1+1, 1+2, 2+1, 3 (4가지)

// 그럼 d[4] = ?
// d[1]은 4가 되기 위해 3을 더해주기만 하면 된다
// d[2]는 4가 되기 위해 2를 더해주기만 하면 된다
// d[3]은 4가 되기 위해 1을 더해주기만 하면 된다
// 즉 d[4] = d[1] + d[2] + d[3]
// 점화식: d[k] = d[k - 3] + d[k - 2] + d[k - 1]