#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N), F(1000001), ans(N);
    stack<int> s;
    
    for (int i = 0; i < N; ++i) 
    {
        cin >> v[i];
        ++F[v[i]];
    }

    for (int i = N - 1; i >= 0; --i)
    {
        while (!s.empty() && F[s.top()] <= F[v[i]]) s.pop();

        if (s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(v[i]);
    }

    for (auto e : ans) cout << e << ' ';

    return 0;
}