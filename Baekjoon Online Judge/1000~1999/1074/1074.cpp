#include <bits/stdc++.h>
using namespace std;

int N, r, c;

int func(int n, int r, int c) {
    if (n == 0) return 0;
    // 배열의 한 변의 절반 길이: 2^(n - 1)
    int half = 1 << (n - 1);

    if (r < half && c < half) return func(n - 1, r, c);
    if (r < half && c >= half) return (half * half) + func(n - 1, r, c - half);
    if (r >= half && c < half) return (2 * half * half) + func(n - 1, r - half, c);
    return (3 * half * half) + func(n - 1, r - half, c - half);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> r >> c;
    cout << func(N, r, c);

    return 0;
}