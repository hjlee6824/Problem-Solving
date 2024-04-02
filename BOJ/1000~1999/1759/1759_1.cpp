#include <bits/stdc++.h>
using namespace std;

int L, C;
int arr[15];
char alphabet[15];
string password;
string vowels = "aeiou";

bool check() {
    int consonant, vowel = 0;
    for (auto p : password) {
        for (auto v : vowels) {
            if (p == v) {
                ++vowel;
                break;
            }
        }
    }
    consonant = L - vowel;
    if (vowel < 1 || consonant < 2) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> L >> C;

    for (int i = 0; i < C; ++i) {
        cin >> alphabet[i];
        arr[i] = (i < L ? 0 : 1);
    }

    sort(alphabet, alphabet + C);

    do {
        password = "";
        for (int i = 0; i < C; ++i)
            if (arr[i] == 0)
                password += alphabet[i];

        if (check()) {
            for (auto ch : password) cout << ch;
            cout << '\n';
        }
    } while (next_permutation(arr, arr + C));

    return 0;
}

// 2. next_permutation을 이용한 풀이