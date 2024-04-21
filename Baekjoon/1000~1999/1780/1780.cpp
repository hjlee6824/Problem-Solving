#include <bits/stdc++.h>
using namespace std;

int N;
int arr[2187][2187];
int cnt[3]; // -1, 0, 1로 이루어진 종이의 개수를 순서대로 저장

// 길이가 len인 배열을 x, y부터 전부 다 같은지 확인
bool check(int len, int x, int y) {
    for (int i = x; i < x + len; ++i)
        for (int j = y; j < y + len; ++j)
            if (arr[i][j] != arr[x][y])
                return false;

    return true;
}

void func(int n, int x, int y) {
    // 전부 다 동일하거나 종이 크기가 1x1이면 재귀 종료
    if (check(n, x, y)) {
        ++cnt[arr[x][y] + 1];
        return;
    }

    // 동일하지 않다면 종이를 9등분하여 재귀 호출
    int len = n / 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            func(len, x + i * len, y + j * len);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> arr[i][j];

    func(N, 0, 0);

    for (int i = 0; i < 3; ++i)
        cout << cnt[i] << '\n';

    return 0;
}