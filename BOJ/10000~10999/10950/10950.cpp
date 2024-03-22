#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    int a, b;

    for (int i = 0; i < t; ++i)
    {
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }

    return 0;
}