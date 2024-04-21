#include <bits/stdc++.h>
using namespace std;

int N;
int ans = 1;
stack<int> s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; ++i) {
        int input;
        cin >> input;
        s.push(input);
    }

    int right = s.top();
    while (!s.empty()) {
        if (right < s.top()) {
            right = s.top();
            ++ans;
        }
        s.pop();
    }

    cout << ans;
    return 0;
}