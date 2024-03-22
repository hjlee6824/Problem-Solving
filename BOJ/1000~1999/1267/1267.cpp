#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i) cin >> v[i];

    int Y = 0, M = 0;

    for (auto& e : v)
    {
        Y += ((e / 30) + 1) * 10;
        M += ((e / 60) + 1) * 15;
    }

    if (Y == M) cout << "Y M " << Y;
    else cout << (Y < M ? "Y " + to_string(Y) : "M " + to_string(M));

    return 0;
}