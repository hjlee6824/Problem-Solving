#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cin.ignore();

    for (int i = 1; i <= N; ++i)
    {
        string str;
        getline(cin, str);

        cout << i << ". " << str << '\n';
    }

    return 0;
}