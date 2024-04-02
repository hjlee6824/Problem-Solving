#include <bits/stdc++.h>
using namespace std;

int k;
int ans[6];
int arr[12];
bool is_used[12];

void func(int n) {
    if (n == 6) {
        for (int i = 0; i < 6; ++i)
            cout << ans[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < k; ++i) {
        if (!is_used[i]) {
            if (n >= 1 && arr[i] <= ans[n - 1]) continue;
            ans[n] = arr[i];
            is_used[i] = true;
            func(n + 1);
            is_used[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        cin >> k;
        if (k == 0) break;
        
        for (int i = 0; i < k; ++i)
            cin >> arr[i];

        func(0);

        cout << '\n';
    }

    return 0;
}

// 1. 백트래킹 풀이