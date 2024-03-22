#include <iostream>
#include <array>

int main()
{
    std::array<int, 6> original{1, 1, 2, 2, 2, 8};
    std::array<int, 6> current{};
    
    for (int i = 0; i < 6; ++i)
    {
        std::cin >> current[i];

        if (current[i] > original[i])
            std::cout << -(current[i] - original[i]) << ' ';
        else
            std::cout << original[i] - current[i] << ' ';
    }

    return 0;
}