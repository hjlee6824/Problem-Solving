#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[8];

void func(int k) {
    if (k == M) {
        for (int i = 0; i < M; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if (k >= 1 && i < arr[k - 1]) continue;
        arr[k] = i;
        func(k + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    func(0);

    return 0;
}