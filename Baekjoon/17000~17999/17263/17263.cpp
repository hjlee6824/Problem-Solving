#include <bits/stdc++.h>
using namespace std;

int n;
int a[500000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);
    cout << a[n - 1];

    return 0;
}