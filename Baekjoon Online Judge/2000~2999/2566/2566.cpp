#include <iostream>
#include <array>

int main()
{
    std::array<int, 81> arr{};

    int max = 0;
    int indexOfMax = 0;

    for (int i = 0; i < 81; ++i)
    {
        std::cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
            indexOfMax = i;
        }
    }

    std::cout << max << '\n' << (indexOfMax / 9) + 1 << ' ' << (indexOfMax % 9) + 1;

    return 0;
}