#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    int a, b;
    char ch;

    for (int i = 0; i < t; ++i)
    {
        std::cin >> a >> ch >> b;
        std::cout << a + b << '\n';
    }

    return 0;
}