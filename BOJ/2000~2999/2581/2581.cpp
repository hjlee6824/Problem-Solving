#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M, N;
    cin >> M >> N;

    bool isPrime;
    int sum = 0, min = 10000;

    for (int i = M; i <= N; ++i)
    {
        isPrime = true;

        if (i == 1)
            continue;

        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            sum += i;

            if (min > i)
                min = i;
        }
    }

    if (sum == 0)
        cout << -1;
    else
        cout << sum << '\n' << min;

    return 0;
}