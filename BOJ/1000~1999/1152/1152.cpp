#include <iostream>
#include <string>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    
    std::string str;
    std::getline(std::cin, str);

    int count = 0;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == ' ')
            ++count;
    }

    ++count;

    if (str.front() == ' ')
        --count;

    if (str.back() == ' ')
        --count;

    std::cout << count << '\n';

    return 0;
}