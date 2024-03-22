#include <iostream>
using namespace std;

bool check(int n)
{
    int x = (n / 100);
    int y = (n % 100) / 10;
    int z = (n % 100) % 10;

    if ((x - y) == (y - z))
        return true;

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int count{ 0 };

    if (N < 100)
        count += N;
    else
    {
        count += 99;

        for (int i{ 100 }; i <= N; ++i)
        {
            if (check(i))
                ++count;
        }
    }
    
    cout << count << '\n';

    return 0;
}