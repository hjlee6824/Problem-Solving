#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[8];
int num[8];
bool is_used[8];

void func(int k) {
    if (k == M) {
        for (int i = 0; i < M; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    // 중복되는 수열인지 확인하기 위한 임시 변수
    int tmp = 0;
    for (int i = 0; i < N; ++i) {
        // 현재 항에서 방금 택한 수가 이전에 택했던 수와 다른 경우만 취급
        if (!is_used[i] && tmp != num[i]) {
            arr[k] = num[i];
            is_used[i] = true;
            tmp = num[i];
            func(k + 1);
            is_used[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) cin >> num[i];
    sort(num, num + N);
    func(0);

    return 0;
}