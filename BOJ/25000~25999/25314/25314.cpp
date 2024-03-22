#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i += 4)
        std::cout << "long ";

    std::cout << "int";

    return 0;
}