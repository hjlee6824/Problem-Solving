#include <bits/stdc++.h>
using namespace std;

int student[2][7];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;    

    for (int i = 0; i < N; ++i)
    {
        int S, Y;
        cin >> S >> Y;

        ++student[S][Y];
    }

    int ans = 0;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 7; ++j)
        {
            ans += student[i][j] / K;
            if (student[i][j] % K) ++ans;
        }
    }

    cout << ans;

    return 0;
}