#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 100, b = 100;
    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x > y) b -= x;
        else if (x < y) a -= y;
    }

    cout << a << '\n' << b;
    return 0;
}