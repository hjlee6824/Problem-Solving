#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        string str;
        cin >> str;

        stack<char> s;
        bool isVPS = true;

        for (auto ch : str)
        {
            if (ch == '(') s.push('(');
            else
            {
                if (s.empty())
                {
                    isVPS = false;
                    break;
                }

                s.pop();
            }
        }

        if (!s.empty()) isVPS = false;

        if (isVPS) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}