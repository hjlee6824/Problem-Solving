#include <iostream>
#include <string>

int main()
{
    std::string str;

    while (true)
    {
        std::getline(std::cin, str);

        if (std::cin.eof())
            break;

        std::cout << str << '\n';
    }

    return 0;
}