#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string str;
    std::cin >> str;

    for (auto& i : str)
        if (isupper(i))
            i = std::tolower(i);
        else
            i = std::toupper(i);

    std::cout << str << '\n';

    return 0;
}