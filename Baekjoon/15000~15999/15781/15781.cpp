#include <bits/stdc++.h>
using namespace std;

int n, m;
int helmet[1000];
int vest[1000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; ++i) cin >> helmet[i];
    for (int i = 0; i < m; ++i) cin >> vest[i];

    cout << *max_element(helmet, helmet + n) + *max_element(vest, vest + m);
    return 0;
}