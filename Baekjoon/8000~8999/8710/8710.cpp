#include <bits/stdc++.h>
using namespace std;

int k, w, m;
int ans, mod;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> w >> m;
    ans = (w - k) / m;
    mod = (w - k) % m;
    
    cout << ((mod == 0) ? ans : ans + 1);
    return 0;
}