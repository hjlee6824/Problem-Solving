#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    do {
        for (int i = 0; i < M; ++i)
            cout << v[i] << ' ';
        cout << '\n';
        reverse(v.begin() + M, v.end());
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}