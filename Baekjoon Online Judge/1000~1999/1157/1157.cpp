#include <iostream>
#include <string>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    int count[26] = { 0 };

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            ++count[str[i] - 'A'];
        else
            ++count[str[i] - 'a'];
    }

    int max = 0;
    char mostUsedAlphabet;

    for (int i = 0; i < 26; ++i)
    {
        if (count[i] > max)
        {
            max = count[i];
            mostUsedAlphabet = i + 'A';
        }
        else if (count[i] == max)
        {
            mostUsedAlphabet = '?';
        }
    }

    std::cout << mostUsedAlphabet;

    return 0;
}