#include <bits/stdc++.h>
using namespace std;

int N;
// 전역변수로 선언하면 기본값은 NULL로 초기화됨
// 2187 + 1(NULL)
char arr[2188][2188];

// 3^n x 3^n 크기에서 가운데만 출력하지 않고 재귀 호출
void func(int n, int x, int y) {
    if (n == 1) {
        arr[x][y] = '*';
        return;
    }

    int len = n / 3;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == 1 && j == 1) continue;
            func(len, x + i * len, y + j * len);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i)
        fill(arr[i], arr[i] + N, ' ');

    func(N, 0, 0);

    for (int i = 0; i < N; ++i)
        cout << arr[i] << '\n';

    return 0;
}