#include <bits/stdc++.h>
using namespace std;

int m, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> k;

    if (m % k == 0) cout << "Yes";
    else cout << "No";
    
    return 0;
}