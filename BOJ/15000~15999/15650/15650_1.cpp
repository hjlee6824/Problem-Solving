#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i)
        // M만큼 0을 넣어줌
        v.push_back(i < M ? 0 : 1);

    do {
        for (int i = 0; i < N; ++i)
            if (v[i] == 0) cout << i + 1 << ' ';
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}

// next_permutation을 이용한 풀이