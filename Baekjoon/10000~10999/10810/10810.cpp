#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int i, j, k;
    int basket[101] = { 0 };

    while (m--)
    {
        std::cin >> i >> j >> k;

        for (; i <= j; ++i)
        {
            basket[i] = k;
        }
    }

    for (i = 1; i <= n; ++i)
        std::cout << basket[i] << ' ';

    return 0;
}