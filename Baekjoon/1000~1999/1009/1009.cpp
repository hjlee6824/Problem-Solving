#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int T;

// a^n * a^n의 나머지는 a^2n의 나머지와 같음을 이용
ll mod(ll a, ll b) { 
    if (b == 1) return a % 10;
    ll val = mod(a, b / 2);
    val = val * val % 10;
    if (b % 2 == 0) return val;
    return val * a % 10;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--) {
        ll a, b;
        cin >> a >> b;
        // 10번째 컴퓨터의 번호를 출력하기 위해 처리
        if (a % 10 == 0) cout << 10 << '\n';
        else cout << mod(a, b) << '\n';
    }

    return 0;
}