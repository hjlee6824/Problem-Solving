#include <iostream>

int main()
{
    int a, b;

    while (true)
    {
        std::cin >> a >> b;

        if (std::cin.eof())
            break;

        std::cout << a + b << '\n';
    }

    return 0;
}