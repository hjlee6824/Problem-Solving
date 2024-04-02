#include <bits/stdc++.h>
using namespace std;

int k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        cin >> k;
        if (k == 0) break;

        vector<int> num, v;
        for (int i = 0; i < k; ++i) {
            int input;
            cin >> input;
            num.push_back(input);
            v.push_back(i < 6 ? 0 : 1);
        }

        do {
            for (int i = 0; i < k; ++i) 
                if (v[i] == 0) cout << num[i] << ' ';
            cout << '\n';
        } while (next_permutation(v.begin(), v.end()));

        cout << '\n';
    }

    return 0;
}

// 2. next_permutation을 이용한 풀이