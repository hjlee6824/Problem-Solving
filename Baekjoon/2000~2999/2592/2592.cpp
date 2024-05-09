#include <bits/stdc++.h>
using namespace std;

int cnt[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        int input;
        cin >> input;
        sum += input;
        ++cnt[input];
    }

    int mx = 0, mode = 0;
    for (int i = 1; i <= 1000; ++i) {
        if (mx < cnt[i]) {
            mx = cnt[i];
            mode = i;
        }
    }

    cout << sum / 10 << '\n' << mode;
    return 0;
}