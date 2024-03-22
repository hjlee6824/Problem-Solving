#include <iostream>
#include <vector>

int main()
{
    int L, P;
    std::cin >> L >> P;

    std::vector<int> participants(5);

    for (auto e : participants)
    {
        std::cin >> e;
        std::cout << e - (L * P) << ' ';
    }

    return 0;
}