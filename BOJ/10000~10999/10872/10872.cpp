#include <iostream>

int main()
{
    int n{};
    std::cin >> n;

    long long fact{ 1 };
    
    if (n != 0)
        for (int i = 1; i <= n; ++i)
            fact *= i;

    std::cout << fact << '\n';

    return 0;
}