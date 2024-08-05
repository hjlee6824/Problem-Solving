#include <bits/stdc++.h>
using namespace std;

int n;
int a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        int score_a, score_b;
        cin >> score_a >> score_b;
        if (score_a > score_b) ++a;
        else if (score_a < score_b) ++b;
    }

    cout << a << ' ' << b;
    return 0;
}