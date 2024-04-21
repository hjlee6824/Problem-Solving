#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    int a, b;

    for (int i = 1; i <= t; ++i)
    {
        std::cin >> a >> b;

        std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
    }

    return 0;
}