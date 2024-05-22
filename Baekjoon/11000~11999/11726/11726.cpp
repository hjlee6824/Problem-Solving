#include <bits/stdc++.h>
using namespace std;

int n;
int d[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    d[1] = 1;
    d[2] = 2;

    for (int i = 3; i <= n; ++i)
        d[i] = (d[i - 1] + d[i - 2]) % 10007;

    cout << d[n];
    return 0;
}

// 테이블 정의
// d[i]: 2*i 크기의 직사각형을 채우는 방법 수

// 점화식
// 맨 왼쪽을 2*1로 채우면 나머지를 채우는 경우의 수는 d[i - 1]
// 맨 왼쪽을 1*2로 채우면 나머지를 채우는 경우의 수는 d[i - 2]
// d[i] = d[i - 1] + d[i - 2]

// 초기값
// d[1] = 1
// d[2] = 2