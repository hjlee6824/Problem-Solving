#include <iostream>

int main()
{
    int input, sum = 0;

    for (int i = 0; i < 5; ++i)
    {
        std::cin >> input;

        sum += (input * input);
    }

    std::cout << sum % 10 << '\n';

    return 0;
}