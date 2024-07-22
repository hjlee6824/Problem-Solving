#include <bits/stdc++.h>
using namespace std;

string mbti;
int n, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> mbti >> n;

    while (n--) {
        string input;
        cin >> input;
        if (mbti == input) ++ans;
    }

    cout << ans;
    return 0;
}