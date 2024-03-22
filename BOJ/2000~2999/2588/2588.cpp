#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;

    int digitOf100 = y / 100;
    int digitOf10 = (y % 100) / 10;
    int digitOf1 = y % 10;

    std::cout << x * digitOf1 << '\n';
    std::cout << x * digitOf10 << '\n';
    std::cout << x * digitOf100 << '\n';
    std::cout << x * y << '\n';

    return 0;
}