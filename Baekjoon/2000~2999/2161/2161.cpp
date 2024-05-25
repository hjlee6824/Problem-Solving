#include <bits/stdc++.h>
using namespace std;

int n;
queue<int> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; ++i) q.push(i);

    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
        q.push(q.front());
        q.pop();
    }

    return 0;
}