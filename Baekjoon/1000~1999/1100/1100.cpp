#include <bits/stdc++.h>
using namespace std;

int ans;
string board[8];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 8; ++i)
        cin >> board[i];

    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 8; j += 2)
            if (board[i][j + (i % 2)] == 'F') ++ans;

    cout << ans;
    return 0;
}