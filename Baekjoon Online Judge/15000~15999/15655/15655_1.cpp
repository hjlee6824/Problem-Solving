#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> num, v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        int input;
        cin >> input;
        num.push_back(input);
        v.push_back(i < M ? 0 : 1);
    }

    sort(num.begin(), num.end());

    do {
        for (int i = 0; i < N; ++i)
            if (v[i] == 0) cout << num[i] << ' ';
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}