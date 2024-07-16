#include <bits/stdc++.h>
using namespace std;

int w, h;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> w >> h;

    cout << fixed;
    cout.precision(1);
    cout << w * h / 2.0;
    
    return 0;
}