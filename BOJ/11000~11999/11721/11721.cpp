#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    int index = 0;

    while (index != str.size()) {
        cout << str[index];
        ++index;

        if (index % 10 == 0) {
            cout << '\n';
        }
    }

    return 0;
}