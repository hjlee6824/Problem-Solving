#include <bits/stdc++.h>
using namespace std;

int n;
int input[8];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> input[i];

    sort(input, input + n);

    int ans = 0;
    do {
        int sum = 0;
        vector<int> v;
        for (int i = 0; i < n; ++i)
            v.push_back(input[i]);

        for (int i = 0; i < n - 1; ++i)
            sum += abs(v[i] - v[i + 1]);

        ans = max(ans, sum);
    } while (next_permutation(input, input + n));

    cout << ans;
    return 0;
}