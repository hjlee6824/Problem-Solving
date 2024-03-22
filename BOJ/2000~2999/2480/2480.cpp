#include <iostream>

int max(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    int prize;

    if (x == y && y == z)
        prize = 10000 + x * 1000;
    else if (x == y || x == z)
        prize = 1000 + x * 100;
    else if (y == z)
        prize = 1000 + y * 100;
    else
        prize = max(x, y, z) * 100;

    std::cout << prize << '\n';

    return 0;
}