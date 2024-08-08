#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin.ignore();

    while (n--) {
        string str;
        getline(cin, str);
        str[0] = toupper(str[0]);
        cout << str << '\n';
    }

    return 0;
}