#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    if (next_permutation(v.begin(), v.end()))
        for (auto e : v) cout << e << ' ';
    else
        cout << -1;

    return 0;
}