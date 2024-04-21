#include <iostream>
using namespace std;

bool prime(long long n)
{
    if (n <= 1)
        return false;

    for (long long i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        long long n;
        cin >> n;

        while (!prime(n))
        {
            ++n;
        }

        cout << n << '\n';
    }
    
    return 0;
}