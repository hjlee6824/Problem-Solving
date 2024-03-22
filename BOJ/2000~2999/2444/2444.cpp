#include <iostream>
#include <cstdlib>

int main()
{
    int n;
    std::cin >> n;

    for (int i = -n + 1; i < n; ++i)
    {
        for (int j = 0; j < 2 * n - 1 - std::abs(i); ++j)
            std::cout << (j < abs(i) ? ' ' : '*');

        std::cout << '\n';
    }

    return 0;
}