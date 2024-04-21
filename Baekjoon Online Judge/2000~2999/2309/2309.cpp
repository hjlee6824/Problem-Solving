#include <bits/stdc++.h>
using namespace std;

vector<int> v(9);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    bool found = false;

    for (int i = 0; i < 9; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 8; ++i)
    {
        for (int j = i + 1; j < 9; ++j)
        {
            if (sum - (v[i] + v[j]) == 100)
            {
                v[i] = 0;
                v[j] = 0;
                found = true;
            }

            if (found) break;
        }

        if (found) break;
    }

    for (auto& e : v)
    {
        if (e != 0)
            cout << e << '\n';
    }

    return 0;
}