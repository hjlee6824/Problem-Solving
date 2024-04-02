#include <bits/stdc++.h>
using namespace std;

int L, C;
int arr[15];
char alphabet[15];
char password[15];
string vowels = "aeiou";

bool check() {
    int consonant, vowel = 0;
    for (int i = 0; i < L; ++i) {
        for (auto ch : vowels) {
            if (password[i] == ch) {
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
        int idx = 0;
        for (int i = 0; i < C; ++i)
            if (arr[i] == 0)
                password[idx++] = alphabet[i];

        if (check()) {
            for (int i = 0; i < L; ++i)
                cout << password[i];
            cout << '\n';
        }
    } while (next_permutation(arr, arr + C));

    return 0;
}

// 2. next_permutation을 이용한 풀이