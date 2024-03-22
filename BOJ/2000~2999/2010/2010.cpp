#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; ++i) {
        int input;
        cin >> input;
        sum += input;
    }

    cout << sum - (N - 1);

    return 0;
}