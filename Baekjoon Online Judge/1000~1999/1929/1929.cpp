#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M, N;
    cin >> M >> N;

    bool is_prime[1000001];

    for (int i = 1; i <= 1000000; ++i)
        is_prime[i] = true;

    is_prime[1] = false;

    for (int i = 2; i <= 1000000; ++i)
    {
        if (!is_prime[i]) continue;

        for (int j = 2 * i; j <= 1000000; j += i)
        {
            is_prime[j] = false;
        }
    }

    for (int i = M; i <= N; ++i)
    {
        if (is_prime[i])
            cout << i << '\n';
    }

    return 0;
}