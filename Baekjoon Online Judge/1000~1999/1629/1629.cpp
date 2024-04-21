#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll mod(ll a, ll b, ll m) {
    // a가 m보다 클 수 있으므로 m으로 나눠줌
    if (b == 1) return a % m;
    ll val = mod(a, b / 2, m);
    // val * val가 m보다 클 수 있으므로 m으로 나눠줌
    val = val * val % m;

    if (b % 2 == 0) return val;
    return val * a % m;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    cout << mod(A, B, C);

    return 0;
}

// a를 b번 곱하면 overflow가 일어나므로
// a를 곱할 때마다 m으로 나눈 나머지를 구하면 된다.
// 그런데 이 연산을 b번 반복하면 시간초과가 나므로
// 연산 횟수를 줄이기 위해 a^n * a^n = a^(2n)인 점을 이용해
// 각각의 a^n을 m으로 나눈 나머지를 구하여 곱한 값이 a^(2n)의 나머지가 된다.

// 이를 귀납적으로 생각하면
// a^1의 나머지는 a % m이므로
// a^k의 나머지를 알면 a^2k와 a^(2k+1)의 나머지도 알 수 있다.
// 왜냐하면 a^k * a^k = a^2k이고 a^k의 나머지를 알기 때문에 a^2k의 나머지도 알 수 있으며
// a^(2k+1)의 나머지는 a^2k * a의 나머지이기 때문이다.
// 따라서, a의 임의의 지수승을 O(logb)에 계산 가능하다.