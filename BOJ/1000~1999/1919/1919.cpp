#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v1(26), v2(26);
    int ans = 0;

    string a, b;
    cin >> a >> b;

    for (auto& ch : a) ++v1[ch - 'a'];
    for (auto& ch : b) ++v2[ch - 'a'];

    for (int i = 0; i < 26; ++i)
    {
        ans += abs(v1[i] - v2[i]);
    }

    cout << ans;

    return 0;
}