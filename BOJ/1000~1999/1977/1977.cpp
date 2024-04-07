#include <bits/stdc++.h>
using namespace std;

int M, N;
int sum;
int tmp = 10000;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> N;

    for (int i = 1; i <= 100; ++i) {
        int square = i * i;
        if (square >= M && square <= N) {
            if (square < tmp) tmp = square;
            sum += square;
        }
    }

    if (sum != 0) cout << sum << '\n' << tmp;
    else cout << -1;

    return 0;
}