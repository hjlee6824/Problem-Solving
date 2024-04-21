#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (getline(cin, str)) {
        int lower = 0, upper = 0, num = 0, whitespace = 0;

        for (auto ch : str) {
            if (ch >= 'a' && ch <= 'z') ++lower;
            if (ch >= 'A' && ch <= 'Z') ++upper;
            if (ch >= '0' && ch <= '9') ++num;
            if (ch == ' ') ++whitespace;
        }

        cout << lower << ' ' << upper << ' ' << num << ' ' << whitespace << '\n';
    }

    return 0;
}