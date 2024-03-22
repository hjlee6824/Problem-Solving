#include <bits/stdc++.h>
using namespace std;

int arr[5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; ++i) {
        int sum = 0;

        for (int j = 0; j < 4; ++j) {
            int input;
            cin >> input;
            sum += input;
        }

        arr[i] = sum;
    }

    int max = 0, max_index = 0;
    for (int i = 0; i < 5; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i + 1;
        }
    }

    cout << max_index << ' ' << max; 

    return 0;
}