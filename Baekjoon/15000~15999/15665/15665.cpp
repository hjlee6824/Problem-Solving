#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[7];
int num[7];

void func(int k) {
    if (k == M) {
        for (int i = 0; i < M; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    int tmp = 0;
    for (int i = 0; i < N; ++i) {
        if (tmp == num[i]) continue;
        arr[k] = num[i];
        tmp = num[i];
        func(k + 1);
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