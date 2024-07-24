#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    for (int i = s.size() - 5; i < s.size(); ++i) cout << s[i];
    return 0;
}