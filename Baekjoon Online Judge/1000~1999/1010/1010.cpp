#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        if (M / 2 < N)
            N = M - N;

        long long numerator = 1;
        long long denominator = 1;
        
        for (int i = 1; i <= N; ++i)
        {
            numerator *= M;
            --M;

            denominator *= i;
        }

        cout << numerator / denominator << '\n';
    }

    return 0;
}