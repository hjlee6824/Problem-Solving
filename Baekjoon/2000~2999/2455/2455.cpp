#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    vector<int> v;

    for (int i = 0; i < 4; ++i) {
        int a, b;
        cin >> a >> b;
        sum -= a;
        sum += b;
        v.push_back(sum);
    }

    sort(v.begin(), v.end());

    cout << v.back();
    return 0;
}