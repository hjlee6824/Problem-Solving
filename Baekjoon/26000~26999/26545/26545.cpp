#include <bits/stdc++.h>
using namespace std;

int n;
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        int input;
        cin >> input;
        ans += input;
    }

    cout << ans;
    return 0;
}