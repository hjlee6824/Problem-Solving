#include <bits/stdc++.h>
using namespace std;

int L, C;
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

void func(int n, int cur) {
    if (n == L) {
        if (check()) {
            for (int i = 0; i < L; ++i)
                cout << password[i];
            cout << '\n';
        }
        return;
    }

    for (int i = cur; i < C; ++i) {
        password[n] = alphabet[i];
        func(n + 1, i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> L >> C;
    for (int i = 0; i < C; ++i) cin >> alphabet[i];
    sort(alphabet, alphabet + C);
    func(0, 0);

    return 0;
}

// 1. 백트래킹 풀이