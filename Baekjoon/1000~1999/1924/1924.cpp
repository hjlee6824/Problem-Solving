#include <bits/stdc++.h>
using namespace std;

int x, y;
int ans;
int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> x >> y;
    for (int i = 0; i < x - 1; ++i) ans += month[i];
    ans += y;
    cout << week[ans % 7];
    return 0;
}