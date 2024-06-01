#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        string str;
        cin >> str;
        
        if (str == "0") break;

        int width = str.length() + 1;
        for (auto ch : str) {
            if (ch - '0' == 1) width += 2;
            else if (ch - '0' == 0) width += 4;
            else width += 3;
        }

        cout << width << '\n';
    }

    return 0;
}