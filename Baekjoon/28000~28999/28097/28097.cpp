#include <bits/stdc++.h>
using namespace std;

int n;
int sum;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    sum += (n - 1) * 8;

    while (n--) {
        int input;
        cin >> input;
        sum += input;
    }

    cout << sum / 24 << ' ' << sum % 24;
    return 0;
}