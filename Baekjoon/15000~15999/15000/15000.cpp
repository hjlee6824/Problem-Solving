#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;
    for (auto& ch : str) ch = toupper(ch);
    cout << str;
    return 0;
}