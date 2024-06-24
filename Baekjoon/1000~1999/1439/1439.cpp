#include <bits/stdc++.h>
using namespace std;

string s;
int cnt[2];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    ++cnt[s[0] - '0'];

    for (int i = 1; i <= s.size(); ++i)
        if (s[i] != s[i - 1]) ++cnt[s[i] - '0'];

    cout << min(cnt[0], cnt[1]);
    return 0;
}

// 그리디 풀이
// 0으로 연속된 문자열의 개수와 1로 연속된 문자열의 개수 중 더 적은 쪽을 바꾼다