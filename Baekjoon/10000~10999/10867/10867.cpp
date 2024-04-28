#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; ++i) {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto i : v)
        cout << i << ' ';
    
    return 0;
}