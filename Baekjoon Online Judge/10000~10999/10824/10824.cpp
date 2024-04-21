#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B, C, D;
    cin >> A >> B >> C >> D;

    cout << stoll(A + B) + stoll(C + D);

    return 0;
}