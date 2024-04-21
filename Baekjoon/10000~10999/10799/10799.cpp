#include <bits/stdc++.h>
using namespace std;

int ans = 0;
string str;
stack<char> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> str;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '(') 
        {
            s.push('(');
        }
        else
        {
            if (str[i - 1] == '(')
            {
                s.pop();
                ans += s.size();
            }
            else
            {
                ++ans;
                s.pop();
            }
        }
    }

    cout << ans;

    return 0;
}