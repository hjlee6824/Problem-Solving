#include <bits/stdc++.h>
using namespace std;

int T;
int A[10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--) {
        for (int i = 0; i < 10; ++i) cin >> A[i];
        sort(A, A + 10, greater<int>());
        cout << A[2] << '\n';
    }

    return 0;
}