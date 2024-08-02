#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;

    if (str.substr(0, 3) == "555") cout << "YES";
    else cout << "NO";
    return 0;
}