#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    bool check = false;
    for (int i = 1; i <= N; ++i)
    {
        if (i + sumOfDigits(i) == N)
        {
            cout << i;
            check = true;
            break;
        }
    }

    if (!check)
        cout << 0;

    return 0;
}