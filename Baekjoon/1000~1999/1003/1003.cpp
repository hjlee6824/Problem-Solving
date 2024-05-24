#include <bits/stdc++.h>
using namespace std;

int t;
int d[41][2]; // d[i]: i번째 항을 구하기 위해 호출되는 0과 1의 개수

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    d[0][0] = 1;
    d[0][1] = 0;
    d[1][0] = 0;
    d[1][1] = 1;

    for (int i = 2; i <= 40; ++i) {
        d[i][0] = d[i - 1][0] + d[i - 2][0];
        d[i][1] = d[i - 1][1] + d[i - 2][1];
    }

    while (t--) {
        int n;
        cin >> n;
        cout << d[n][0] << ' ' << d[n][1] << '\n';
    }

    return 0;
}

// 피보나치 점화식: d[i] = d[i - 1] + [i - 2];