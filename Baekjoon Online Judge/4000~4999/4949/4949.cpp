#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string str;
        getline(cin, str);

        if (str == ".") break;

        stack<char> s;
        bool isBalanced = true;

        for (auto ch : str)
        {
            if (ch == '(' || ch == '[') s.push(ch);
            else if (ch == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    isBalanced = false;
                    break;
                }

                s.pop();
            }
            else if (ch == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    isBalanced = false;
                    break;
                }
                
                s.pop();
            }
        }

        if (!s.empty()) isBalanced = false;

        if (isBalanced) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}