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
        for (auto ch : str) {
            if (ch == 'S') {
                cout << str;
                break;
            }
        }
    }

    return 0;
}