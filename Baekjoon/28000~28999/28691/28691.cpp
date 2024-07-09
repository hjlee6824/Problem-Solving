#include <bits/stdc++.h>
using namespace std;

char ch;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> ch;

    if (ch == 'M') cout << "MatKor";
    else if (ch == 'W') cout << "WiCys";
    else if (ch == 'C') cout << "CyKor";
    else if (ch == 'A') cout << "AlKor";
    else cout << "$clear";

    return 0;
}