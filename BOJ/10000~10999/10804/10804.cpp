#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(21);

    for (int i = 1; i <= 20; ++i) v[i] = i;

    for (int i = 0; i < 10; ++i)
    {
        int a, b;
        cin >> a >> b;

        reverse(v.begin() + a, v.begin() + b + 1);
    }

    for (int i = 1; i <= 20; ++i) cout << v[i] << ' ';

    return 0;
}