#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    int n;
    std::cin >> n;

    int a, b;
    int total = 0;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> a >> b;
        total += a * b;
    }

    if (total == x)
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}