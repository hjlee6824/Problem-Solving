#include <bits/stdc++.h>
using namespace std;

long long ans;
string A, B;
vector<int> v1, v2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B;

    for (auto ch : A) v1.push_back(ch - '0');
    for (auto ch : B) v2.push_back(ch - '0');

    for (auto i : v1)
        for (auto j : v2)
            ans += i * j;

    cout << ans;
    return 0;
}