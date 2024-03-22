#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int S, K, H;
    cin >> S >> K >> H;

    if (S + K + H >= 100) cout << "OK";
    else if (S < K && S < H) cout << "Soongsil";
    else if (K < S && K < H) cout << "Korea";
    else cout << "Hanyang";

    return 0;
}