#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[100001];
int d[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        d[i] = d[i - 1] + arr[i];
    }

    while (m--) {
        int i, j;
        cin >> i >> j;
        cout << d[j] - d[i - 1] << '\n';
    }
    
    return 0;
}

// 테이블 정의
// d[i]: 1번째부터 i번째까지의 합

// 점화식
// d[i] = d[i - 1] + arr[i]

// 초기값
// d[0] = 0