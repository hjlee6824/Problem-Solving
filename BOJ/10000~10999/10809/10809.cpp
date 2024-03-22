#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    for (int i = 0; i < 26; ++i)
    {
        bool hasAlphabet = false;

        for (int j = 0; j < s.length(); ++j)
        {
            if (s[j] == ('a' + i))
            {
                std::cout << j << ' ';
                hasAlphabet = true;
                break;
            }
        }

        if (!hasAlphabet)
            std::cout << -1 << ' ';
    }

    return 0;
}