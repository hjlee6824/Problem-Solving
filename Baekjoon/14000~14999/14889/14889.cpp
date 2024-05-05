#include <bits/stdc++.h>
using namespace std;

int n;
int s[20][20];
int ans = 0x7f7f7f7f;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    vector<int> v(n);
    fill(v.begin() + n / 2, v.end(), 1);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> s[i][j];
    
    do {
        int start = 0, link = 0;
        for (int i = 0; i < n - 1 ; ++i) {
            for (int j = i + 1; j < n; ++j) {
                // 같은 팀에 속한 선수끼리의 능력치만 더한다
                if (v[i] != v[j]) continue;
                if (v[i] == 0) start += s[i][j] + s[j][i];
                else link += s[i][j] + s[j][i];
            }
        }
        ans = min(ans, abs(start - link));
    } while (next_permutation(v.begin(), v.end())); // 경우의 수: 20C10 = 184756

    cout << ans;
    return 0;
}

// 시간복잡도: O(20C10 * 20 * 20)