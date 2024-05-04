#include <bits/stdc++.h>
using namespace std;

int n;
int arr[11];
int mx = -1'000'000'000;
int mn = 1'000'000'000;
vector<int> operators;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; ++i) cin >> arr[i];

    for (int i = 0; i < 4; ++i) {
        int input;
        cin >> input;
        for (int j = 0; j < input; ++j) operators.push_back(i);
    }

    do {
        int ans = arr[0];
        for (int i = 1; i < n; ++i) {
            int op = operators[i - 1];
            if (op == 0) ans += arr[i];
            else if (op == 1) ans -= arr[i];
            else if (op == 2) ans *= arr[i];
            else ans /= arr[i];
        }
        mx = max(mx, ans);
        mn = min(mn, ans);
    } while (next_permutation(operators.begin(), operators.end()));

    cout << mx << '\n' << mn;
    return 0;
}

// 시간복잡도: 11 * O(10!) = 39916800
// 그러나 연산자의 중복이 생기므로 실제 경우의 수는 훨씬 작음