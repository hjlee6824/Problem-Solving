#include <bits/stdc++.h>
using namespace std;

string S;
vector<string> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> S;

    for (int i = 0; i < S.size(); ++i) {
        string suffix = S.substr(i, S.size() - i);
        v.push_back(suffix);
    }

    sort(v.begin(), v.end());

    for (auto str : v)
        cout << str << '\n';

    return 0;
}