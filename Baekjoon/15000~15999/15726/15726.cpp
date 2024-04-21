#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double A, B, C;
    cin >> A >> B >> C;

    long long ans1 = A * B / C;
    long long ans2 = A / B * C;

    cout << (ans1 > ans2 ? ans1 : ans2);

    return 0;
}