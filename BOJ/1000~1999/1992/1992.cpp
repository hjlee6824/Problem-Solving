#include <bits/stdc++.h>
using namespace std;

int N;
char arr[64][64];

bool check(int len, int x, int y) {
    for (int i = x; i < x + len; ++i)
        for (int j = y; j < y + len; ++j)
            if (arr[i][j] != arr[x][y]) return false;

    return true;
}

// 모든 영역이 같으면 그냥 출력
// 다르다면 괄호를 먼저 출력하고 4등분한 영역에 대해 검사
void func(int n, int x, int y) {
    
    if (check(n, x, y)) {
        cout << arr[x][y];
        return;
    }

    int len = n / 2;
    
    cout << '(';

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            func(len, x + i * len, y + j * len);

    cout << ')';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> arr[i][j];

    func(N, 0, 0);

    return 0;
}