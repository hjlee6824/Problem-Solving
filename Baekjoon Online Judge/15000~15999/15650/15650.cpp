#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[8];
bool is_used[9];

void func(int k) {
    if (k == M) {
        for (int i = 0; i < M; ++i)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if (!is_used[i]) {
            if (k >= 1 && i <= arr[k - 1]) continue;
            arr[k] = i;
            is_used[i] = true;
            func(k + 1);
            is_used[i] = false;
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