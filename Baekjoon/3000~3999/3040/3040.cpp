#include <bits/stdc++.h>
using namespace std;

int arr[9];
bool check[9];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            if (sum - (arr[i] + arr[j]) == 100) {
                check[i] = true;
                check[j] = true;
            }
        }
    }

    for (int i = 0; i < 9; ++i) {
        if (check[i] == true) continue;
        cout << arr[i] << '\n';
    }

    return 0;
}