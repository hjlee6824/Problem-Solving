#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int date;
    cin >> date;

    int ans = 0;
    vector<int> v(5);

    for (int i = 0; i < 5; ++i)
    {
        cin >> v[i];
        if (date == v[i]) ++ans;
    }

    cout << ans;

    return 0;
}