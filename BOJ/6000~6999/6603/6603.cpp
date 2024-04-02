#include <bits/stdc++.h>
using namespace std;

int k;
int ans[6];
int arr[12];

void func(int n, int cur) {
    if (n == 6) {
        for (int i = 0; i < 6; ++i)
            cout << ans[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = cur; i < k; ++i) {
        ans[n] = arr[i];
        func(n + 1, i + 1);
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

        func(0, 0);
        cout << '\n';
    }

    return 0;
}

// 1. 백트래킹 풀이