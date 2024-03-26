#include <bits/stdc++.h>
using namespace std;

int N;
int arr[128][128];
int cnt[2]; // 하얀색과 파란색의 개수 저장

bool check(int len, int x, int y) {
    for (int i = x; i < x + len; ++i)
        for (int j = y; j < y + len; ++j)
            if (arr[i][j] != arr[x][y]) return false;

    return true;
}

void func(int n, int x, int y) {
    if (check(n, x, y)) {
        ++cnt[arr[x][y]];
        return;
    }

    int len = n / 2;
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            func(len, x + i * len, y + j * len);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> arr[i][j];

    func(N, 0, 0);

    cout << cnt[0] << '\n' << cnt[1];

    return 0;
}