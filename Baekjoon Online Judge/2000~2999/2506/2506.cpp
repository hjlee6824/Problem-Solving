#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int sum = 0, score = 1;

    for (int i = 0; i < N; ++i) {
        int input;
        cin >> input;

        if (input == 1) {
            sum += score;
            ++score;
        } else {
            score = 1;
        }
    }

    cout << sum;

    return 0;
}