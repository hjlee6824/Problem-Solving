#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 3; ++i)
    {
        int input;
        int count = 0;

        for (int j = 0; j < 4; ++j)
        {
            cin >> input;
            if (input == 0) ++count;
        }

        if (count == 0)
            cout << "E\n";
        else
            cout << static_cast<char>(count + 'A' - 1) << '\n';
    }

    return 0;
}