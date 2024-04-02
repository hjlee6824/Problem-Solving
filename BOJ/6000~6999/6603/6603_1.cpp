#include <bits/stdc++.h>
using namespace std;

int k;
int num[12];
int arr[12];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        cin >> k;
        if (k == 0) break;

        for (int i = 0; i < k; ++i) {
            cin >> num[i];
            arr[i] = (i < 6 ? 0 : 1);
        }

        do {
            for (int i = 0; i < k; ++i) 
                if (arr[i] == 0) cout << num[i] << ' ';
            cout << '\n';
        } while (next_permutation(arr, arr + k));

        cout << '\n';
    }

    return 0;
}

// 2. next_permutation을 이용한 풀이