#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    cin >> str;

    int ans = 0;

    for (auto& ch : str)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ++ans;
    }

    cout << ans;

    return 0;
}