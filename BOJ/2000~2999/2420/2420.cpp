#include <iostream>
#include <cstdlib>

int main()
{
    long long n{};
    std::cin >> n;

    long long m{};
    std::cin >> m;

    std::cout << std::abs(n - m);

    return 0;
}