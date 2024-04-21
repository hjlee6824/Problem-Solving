#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    int r;
    std::string str;

    for (int i = 0; i < t; ++i)
    {
        std::cin >> r >> str;

        for (int j = 0; j < str.length(); ++j)
            for (int k = 0; k < r; ++k)
                std::cout << str[j];

        std::cout << '\n';
    }

    return 0;
}