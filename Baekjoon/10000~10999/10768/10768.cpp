#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;

    if (a < 2) cout << "Before";
    else if (a == 2) {
        if (b < 18) cout << "Before";
        else if (b == 18) cout << "Special";
        else cout << "After";
    }
    else cout << "After";

    return 0;
}