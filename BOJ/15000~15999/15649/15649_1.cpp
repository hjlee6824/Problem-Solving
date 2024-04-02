#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    
    for (int i = 0; i < N; ++i)
        v.push_back(i + 1);

    do {
        for (int i = 0; i < M; ++i)
            cout << v[i] << ' ';
        cout << '\n';
        // 앞의 M개를 제외한 나머지 항을 뒤집어 순서를 건너뛴다
        reverse(v.begin() + M, v.end());
    } while (next_permutation(v.begin(), v.end()));
 
    return 0;
}