#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    stack<int> s;
    long long ans = 0;

    while (N--)
    {
        int height;
        cin >> height;

        while (!s.empty() && s.top() <= height) s.pop();
        ans += s.size();
        s.push(height);
    }

    cout << ans;

    return 0;
}