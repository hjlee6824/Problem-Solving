#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;

    while (true)
    {
        getline(cin, str);
        if (str == "END") break;
    
        for (auto iter = str.rbegin(); iter != str.rend(); ++iter)
        {
            cout << *iter;
        }
            
        cout << '\n';
    }

    return 0;
}