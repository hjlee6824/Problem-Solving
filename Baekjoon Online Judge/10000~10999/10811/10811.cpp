#include <iostream>
#include <algorithm>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int i, j;
    int basket[101];

    for (i = 1; i <= n; ++i)
        basket[i] = i;

    while (m--)
    {
        std::cin >> i >> j;

        std::reverse(basket + i, basket + j + 1);
    }

    for (i = 1; i <= n; ++i)
        std::cout << basket[i] << ' ';

    return 0;
}