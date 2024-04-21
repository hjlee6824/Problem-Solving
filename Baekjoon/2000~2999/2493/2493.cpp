#include <bits/stdc++.h>
using namespace std;

int N;
stack<pair<int, int>> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    s.push({0, 100000001});

    for (int i = 1; i <= N; ++i)
    {
        int height;
        cin >> height;

        while (s.top().second <= height)
        {
            s.pop();
        }

        cout << s.top().first << ' ';
        s.push({i, height});
    }

    return 0;
}