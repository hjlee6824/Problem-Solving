#include <bits/stdc++.h>
using namespace std;

string A, B;
int mx, mn;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> A >> B;

    for (auto& ch : A)
        if (ch == '6') ch = '5';

    for (auto& ch : B)
        if (ch == '6') ch = '5';
    
    mn += stoi(A) + stoi(B);

    for (auto& ch : A)
        if (ch == '5') ch = '6';

    for (auto& ch : B)
        if (ch == '5') ch = '6';

    mx += stoi(A) + stoi(B);
    cout << mn << ' ' << mx;

    return 0;
}