#include <iostream>
#include <array>
#include <string>

int main()
{
    std::string word;
    std::cin >> word;

    std::array<int, 26> dial{3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    int time = 0;

    for (int i = 0; i < static_cast<int>(word.length()); ++i)
        time += dial[word[i] - 'A'];

    std::cout << time;

    return 0;
}