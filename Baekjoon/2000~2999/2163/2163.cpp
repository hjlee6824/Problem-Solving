#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    cout << (n - 1) + n * (m - 1);
    return 0;
}