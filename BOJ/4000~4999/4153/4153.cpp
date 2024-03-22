#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<int, 3> t{};

    while (true)
    {
        std::cin >> t[0] >> t[1] >> t[2];

        if (t[0] == 0 && t[1] == 0 && t[2] == 0)
            break;

        std::sort(t.begin(), t.end(), std::greater<int>());

        if (t[0] * t[0] == t[1] * t[1] + t[2] * t[2])
            std::cout << "right\n";
        else
            std::cout << "wrong\n";
    }

    return 0;
}