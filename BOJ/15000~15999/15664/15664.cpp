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

    int tmp = 0;
    for (int i = 0; i < N; ++i) {
        if (is_used[i] || tmp == num[i]) continue;
        if (k >= 1 && num[i] < arr[k - 1]) continue;
        arr[k] = num[i];
        is_used[i] = true;
        tmp = num[i];
        func(k + 1);
        is_used[i] = false;
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