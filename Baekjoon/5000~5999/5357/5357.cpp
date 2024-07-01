#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;    

    while (n--) {
        string str;
        cin >> str;

        queue<char> q;
        
        for (auto ch : str)
            if (q.empty() || ch != q.back()) q.push(ch);

        while (!q.empty()) {
            cout << q.front();
            q.pop();
        }

        cout << '\n';
    }

    return 0;
}