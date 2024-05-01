#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 1; i <= N; ++i) v.push_back(i);

    do {
        for (auto i : v) 
            cout << i << ' ';
        cout << '\n';
    } while (next_permutation(v.begin(), v.end()));

    return 0;
}