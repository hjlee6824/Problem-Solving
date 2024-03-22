#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string str;
        cin >> str;

        if (str == "0") break;

        stack<char> s;

        for (auto ch : str)
            s.push(ch);

        string result{};

        for (int i = 0; i < str.size(); ++i)
        {
            result += s.top();
            s.pop();
        }

        if (str == result)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}