#include <bits/stdc++.h>
using namespace std;

int cnt;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; ++i) {
        int input;
        cin >> input;
        if (input == 1) ++cnt;
    }

    if (cnt >= 2) cout << 1;
    else cout << 2;
    
    return 0;
}