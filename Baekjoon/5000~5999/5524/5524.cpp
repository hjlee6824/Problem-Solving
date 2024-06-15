#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        for (auto& ch : str)
            if (ch >= 'A' && ch <= 'Z')
                ch = ch - 'A' + 'a';
                
        cout << str << '\n';
    }

    return 0;
}