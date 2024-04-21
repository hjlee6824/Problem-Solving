#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    constexpr int max = 1000000;
    bool is_prime[max + 1];

    for (int i = 1; i <= max; ++i)
        is_prime[i] = true;

    is_prime[1] = false;

    for (int i = 2; i <= max; ++i)
    {
        if (!is_prime[i]) continue;

        for (int j = 2 * i; j <= max; j += i)
        {
            is_prime[j] = false;
        }
    }

    while (T--)
    {
        int N;
        cin >> N;

        int count = 0;
        int i = 2;
        int j = N - i;

        while (i <= j)
        {
            if (is_prime[i] && is_prime[j]) ++count;
            ++i;
            --j;
        }

        cout << count << '\n';
    }

    return 0;
}