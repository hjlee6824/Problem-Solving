#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    stack<char> front;
    stack<char> back;
    
    for (auto e : str)
        front.push(e);

    int M;
    cin >> M;

    while (M--)
    {
        char ch;
        cin >> ch;

        switch (ch)
        {
            case 'L':
                if (!front.empty())
                {
                    back.push(front.top());
                    front.pop();
                }
                
                break;

            case 'D':
                if (!back.empty())
                {
                    front.push(back.top());
                    back.pop();
                }
                
                break;

            case 'B':
                if (!front.empty())
                {
                    front.pop();
                }

                break;

            case 'P':
                char input;
                cin >> input;

                front.push(input);
                break;
        }
    }

    while (!front.empty())
    {
        back.push(front.top());
        front.pop();
    }

    while (!back.empty())
    {
        cout << back.top();
        back.pop();
    }

    return 0;
}