#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        string str;
        cin >> str;

        list<char> L;
        auto cursor = L.end();

        for (auto ch : str)
        {
            switch (ch)
            {
                case '-':
                    if (cursor != L.begin()) cursor = L.erase(--cursor);
                    break;

                case '<':
                    if (cursor != L.begin()) --cursor;
                    break;

                case '>':
                    if (cursor != L.end()) ++cursor;
                    break;

                default:
                    L.insert(cursor, ch);
                    break;
            }
        }

        for (auto ch : L) cout << ch;
        cout << '\n';
    }

    return 0;
}