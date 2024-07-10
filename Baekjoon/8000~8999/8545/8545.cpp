#include <bits/stdc++.h>
using namespace std;

string str;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> str;
    reverse(str.begin(), str.end());
    
    cout << str;
    return 0;
}