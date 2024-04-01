#include <bits/stdc++.h>
using namespace std;

int N;
int ans = 0;
bool is_used1[14]; // 열 점유 상태
bool is_used2[27]; // 좌측 하단과 우측 상단을 잇는 대각선 방향 점유 상태
bool is_used3[27]; // 좌측 상단과 우측 하단을 잇는 대각선 방향 점유 상태

// k개의 퀸을 배치함
void func(int k) {
    if (k == N) {
        ++ans;
        return;
    }

    for (int i = 0; i < N; ++i) {
        if (is_used1[i] || is_used2[k + i] || is_used3[k - i + N - 1]) continue;
        is_used1[i] = true;
        is_used2[k + i] = true;
        is_used3[k - i + N - 1] = true;
        func(k + 1);
        is_used1[i] = false;
        is_used2[k + i] = false;
        is_used3[k - i + N - 1] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    func(0);

    cout << ans;
    return 0;
}

// 한 행에 하나씩 퀸을 배치한다.
// 그러면 한 행에는 퀸이 무조건 하나만 존재하게 되므로
// 열과 대각선에 대해서만 확인해준다.
// 열 확인은 배열의 y좌표가 같은지 확인해주고
// 좌측하단과 우측상단을 잇는 대각선은 x + y가 같고
// 좌측상단과 우측하단을 잇는 대각선은 x - y + (n - 1)이 같다. (n - 1을 더해서 음수 방지)
// 시간복잡도: O(N!)
// 가지치기로 인해 실제 시간복잡도는 더 작다.