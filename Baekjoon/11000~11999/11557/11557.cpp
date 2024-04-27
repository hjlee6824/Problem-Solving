#include <bits/stdc++.h>
using namespace std;

int T, N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--) {
        cin >> N;
        vector<pair<string, int>> v(N);

        int idx = 0, mx = 0;
        for (int i = 0; i < N; ++i) {
            cin >> v[i].first >> v[i].second;
            
            if (v[i].second > mx) {
                idx = i;
                mx = v[i].second;
            }
        }

        cout << v[idx].first << '\n';
    }

    return 0;
}