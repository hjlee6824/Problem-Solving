#include <bits/stdc++.h>
using namespace std;

int V;
int A = 0, B = 0;
string str;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> V >> str;

    for (auto ch : str) {
        if (ch == 'A') ++A;
        if (ch == 'B') ++B;
    }

    if (A > B) cout << 'A';
    else if (A < B) cout << 'B';
    else cout << "Tie";

    return 0;
}