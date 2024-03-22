#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        std::string str;
        std::cin >> str;

        int streak = 0, score = 0;

        for (int j = 0; j < str.length(); ++j)
        {
            if (str[j] == 'O')
            {
                ++streak;
                score += streak;
            }
            else
            {
                streak = 0;
            }
        }

        std::cout << score << '\n';
    }

    return 0;
}