#include <iostream>

int main()
{
    int student[28];

    for (int i = 0; i < 28; ++i)
        std::cin >> student[i];

    bool notSubmitted;

    for (int i = 1; i <= 30; ++i)
    {
        notSubmitted = true;

        for (int j = 0; j < 28; ++j)
        {
            if (student[j] == i)
            {
                notSubmitted = false;
                break;
            }
        }

        if (notSubmitted)
            std::cout << i << '\n';
    }

    return 0;
}