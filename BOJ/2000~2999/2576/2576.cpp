#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 0; i < 7; ++i)
    {
        int input;
        cin >> input;

        if (input % 2 != 0)
            v.push_back(input);
    }

    int sum = 0;
    for (const auto& e : v) sum += e;

    if (v.empty())
        cout << -1;
    else
        cout << sum << '\n' << *min_element(v.begin(), v.end());

    return 0;
}