#include <iostream>

int main()
{
    int input;
    int remainder[42] = { 0 };

    for (int i = 0; i < 10; ++i)
    {
        std::cin >> input;
        ++remainder[input % 42];
    }

    int count = 0;

    for (int i = 0; i < 42; ++i)
    {
        if (remainder[i] != 0)
            ++count;
    }
    
    std::cout << count << '\n';

    return 0;
}