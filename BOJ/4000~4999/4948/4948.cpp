#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    constexpr int max = 123456 * 2;
    bool is_prime[max + 1];

    for (int i = 1; i <= max; ++i)
    {
        is_prime[i] = true;
    }

    is_prime[1] = false;

    for (int i = 2; i <= max; ++i)
    {
        if (!is_prime[i]) continue;

        for (int j = 2 * i; j <= max; j += i)
        {
            is_prime[j] = false;
        }
    }

    while (true)
    {
        int n;
        cin >> n;

        if (n == 0) break;

        int count = 0;

        for (int i = n + 1; i <= 2 * n; ++i)
        {
            if (is_prime[i])
                ++count;
        }

        cout << count << '\n';
    }

    return 0;
}