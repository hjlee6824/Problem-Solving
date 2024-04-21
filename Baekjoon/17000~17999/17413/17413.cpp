#include <bits/stdc++.h>
using namespace std;

stack<char> s;

void print()
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    getline(cin, str);

    bool isTag = false;

    for (auto ch : str)
    {
        if (ch == '<')
        {
            isTag = true;
            print();
            cout << ch;
            continue;
        }
        else if (ch == '>')
        {
            isTag = false;
            cout << ch;
            continue;
        }
        else if (ch == ' ')
        {
            print();
            cout << ch;
            continue;
        }

        if (isTag) cout << ch;
        else s.push(ch);
    }

    print();

    return 0;
}