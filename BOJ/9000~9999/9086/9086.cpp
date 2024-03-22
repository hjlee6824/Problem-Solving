#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    std::string str;

    for (int i = 0; i < t; ++i)
    {
        std::cin >> str;

        std::cout << str.front() << str.back() << '\n';
    }

    return 0;
}