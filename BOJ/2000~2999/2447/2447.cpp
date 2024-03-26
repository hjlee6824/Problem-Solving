#include <bits/stdc++.h>
using namespace std;

int N;
char arr[2187][2187];

void print(int x, int y) {
    for (int i = x; i < x + 3; ++i) {
        for (int j = y; j < y + 3; ++j) {
            if (i == x + 1 && j == y + 1) continue;
            arr[i][j] = '*';
        }
    }
}

// 3^n x 3^n 크기에서 가운데만 출력하지 않고 재귀 호출
void func(int n, int x, int y) {
    if (n == 3) {
        print(x, y);
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

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr[i][j];
        }

        cout << '\n';
    }

    return 0;
}