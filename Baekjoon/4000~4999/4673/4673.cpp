#include <iostream>
#include <vector>
using namespace std;

int d(int n)
{
    int sum{ n };
    while (n != 0)
    {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> isSelfNumber(10001, 1);

    for (int i{ 1 }; i <= 10000; ++i)
    {
        int n{ d(i) };
        
        if (n <= 10000)
        {
            isSelfNumber[n] = 0;
        }
    }

    for (int i{ 1 }; i <= 10000; ++i)
    {
        if (isSelfNumber[i])
            cout << i << '\n';
    }

    return 0;
}