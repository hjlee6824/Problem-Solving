#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string S;
    std::cin >> S;

    std::vector<int> count(26);

    for (auto ch : S)
        ++count[static_cast<std::size_t>(ch - 'a')];

    for (auto e : count)
        std::cout << e << ' ';

    return 0;
}