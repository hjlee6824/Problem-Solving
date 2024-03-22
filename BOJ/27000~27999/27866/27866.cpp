#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    int index;
    std::cin >> index;

    std::cout << s[index - 1] << '\n';

    return 0;
}