#include <bits/stdc++.h>
using namespace std;

int N;
stack<int> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    while (N--)
    {
        string str;
        cin >> str;

        if (str == "push")
        {
            int X;
            cin >> X;
            s.push(X);
        }
        else if (str == "pop")
        {
            if (!s.empty())
            {
                cout << s.top() << '\n';
                s.pop();
            }
            else
            {
                cout << -1 << '\n';
            } 
        }
        else if (str == "size")
        {
            cout << s.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << s.empty() << '\n';
        }
        else
        {
            cout << (!s.empty() ? s.top() : -1) << '\n';
        }
    }

    return 0;
}