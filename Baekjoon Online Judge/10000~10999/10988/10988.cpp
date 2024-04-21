#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;

    int wordLength = static_cast<int>(word.length());
    bool flag = true;

    for (int i = 0; i < wordLength / 2; ++i)
    {
        if (word[i] != word[wordLength - 1 - i])
        {
            flag = false;
            break;
        }
    }

    if (flag)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}