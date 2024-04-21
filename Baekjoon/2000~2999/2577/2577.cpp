#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int result = a * b * c;
    int count[10] = { 0 };

    while (result >= 10)
    {
        ++count[result % 10];
        result /= 10;
    }

    ++count[result % 10];

    for (int i = 0; i < 10; ++i)
        std::cout << count[i] << '\n';

    return 0;
}