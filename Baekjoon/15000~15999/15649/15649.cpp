#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[8];
bool is_used[9];

// 이 함수가 호출되었을 때 k개의 수를 택한 상태임
void func(int k) {
    // 재귀 종료 조건
    if (k == M) {
        for (int i = 0; i < M; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    // 1 ~ N까지의 자연수 중 아직 택하지 않은 수를 택함
    for (int i = 1; i <= N; ++i) {
        if (!is_used[i]) {
            arr[k] = i;
            is_used[i] = true; // 해당 수를 택했음을 표시
            func(k + 1); // 다음 수를 고른다
            is_used[i] = false; // 택했던 수를 다시 택하지 않은 상태로 처리
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    func(0);

    return 0;
}