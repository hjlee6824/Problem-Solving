#include <iostream>
#include <array>

int main()
{
    std::array<std::array<bool, 101>, 101> whitePaper{};

    int n;
    std::cin >> n;

    int x, y;

    while (n--)
    {
        std::cin >> x >> y;

        for (int i = x; i < x + 10; ++i)
            for (int j = y; j < y + 10; ++j)
                whitePaper[i][j] = true;

    }

    int sumOfArea = 0;

    for (int i = 1; i <= 100; ++i)
        for (int j = 1; j <= 100; ++j)
            if (whitePaper[i][j])
                ++sumOfArea;

    std::cout << sumOfArea;

    return 0;
}