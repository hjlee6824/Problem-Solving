#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    int sum = A + B;
    cout << ((sum - 2 * C >= 0) ? (sum - 2 * C) : sum);

    return 0;
}