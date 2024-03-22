#include <iostream>

int main()
{
    int input, index, max = 0;

    for (int i = 0; i < 9; ++i)
    {
        std::cin >> input;

        if (input > max)
        {
            max = input;
            index = i + 1;
        }
    }

    std::cout << max << '\n' << index;
        
    return 0;
}