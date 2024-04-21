#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int ans = 0;

    while (N--)
    {
        string str;
        cin >> str;

        stack<char> s;
        bool isGoodWord = true;

        s.push(str[0]);
        for (int i = 1; i < str.size(); ++i)
        {
            if (str[i] == 'A')
            {
                if (!s.empty() && s.top() == 'A') s.pop();
                else s.push('A');
            }
            else
            {
                if (!s.empty() && s.top() == 'B') s.pop();
                else s.push('B');
            }
        }

        if (!s.empty()) isGoodWord = false;
        if (isGoodWord) ++ans;
    }

    cout << ans;

    return 0;
}