#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--)
    {
        string a, b;
        cin >> a >> b;

        vector<int> v(26);
        bool is_possible = true;

        for (auto& ch : a) ++v[ch - 'a'];
        for (auto& ch : b) --v[ch - 'a'];

        for (int i : v)
        {
            if (i != 0) is_possible = false;
        }

        if (is_possible)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }

    return 0;
}