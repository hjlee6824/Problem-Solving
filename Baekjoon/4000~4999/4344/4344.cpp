#include <iomanip>
#include <iostream>
#include <vector>

int countOverAvg(const auto& scores, int avg)
{
    int count{ 0 };

    for (const auto& score : scores)
        if (score > avg)
            ++count;

    return count;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int C;
    std::cin >> C;

    while (C--)
    {
        int N;
        std::cin >> N;

        std::vector<int> scores(N);
        int sum{ 0 };

        for (auto& score : scores)
        {
            std::cin >> score;
            sum += score;
        }
            
        int avg{ sum / N };
        
        std::cout << std::fixed << std::setprecision(3);
        std::cout << 100 * (static_cast<double>(countOverAvg(scores, avg)) / N) << "%\n";
    }

    return 0;
}