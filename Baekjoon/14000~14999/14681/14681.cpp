#include <iostream>

int main()
{
    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    if (x > 0 && y > 0)
        std::cout << 1;
    else if (x < 0 && y > 0)
        std::cout << 2;
    else if (x < 0 && y < 0)
        std::cout << 3;
    else
        std::cout << 4;

    return 0;
}