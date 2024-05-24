#include <bits/stdc++.h>
using namespace std;

int n;
int d[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    d[1] = 1;
    d[2] = 3;

    for (int i = 3; i <= n; ++i)
        d[i] = (d[i - 1] + 2 * d[i - 2]) % 10007;

    cout << d[n];
    return 0;
}

// d[i]: 2 * i 크기의 직사각형을 채우는 경우의 수
// 2 * 1 타일을 맨 왼쪽에 놓으면 2 * (i - 1) 크기의 직사각형을 채우는 경우의 수와 같다
// 1 * 2 타일을 맨 왼쪽에 놓으면 2 * (i - 2) 크기의 직사각형을 채우는 경우의 수와 같다
// 2 * 2 타일을 맨 왼쪽에 놓으면 2 * (i - 2) 크기의 직사각형을 채우는 경우의 수와 같다