#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    set<string> s, ans;
    string str;

    for (int i = 0; i < N; ++i)
    {
        cin >> str;
        s.insert(str);
    }

    for (int i = 0; i < M; ++i)
    {
        cin >> str;

        if (s.find(str) != s.end())
        {
            ans.insert(str);
        }
    }

    cout << ans.size() << '\n';

    for (const auto& e : ans)
    {
        cout << e << '\n';
    }

    return 0;
}