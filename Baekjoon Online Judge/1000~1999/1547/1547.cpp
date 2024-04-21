#include <bits/stdc++.h>
using namespace std;

bool cup[4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M;
    cin >> M;

    cup[1] = true;

    for (int i = 0; i < M; ++i) {
        int X, Y;
        cin >> X >> Y;
        swap(cup[X], cup[Y]);
    }

    for (int i = 1; i <= 3; ++i) {
        if (cup[i] == true) {
            cout << i;
            return 0;
        }
    }

    return 0;
}