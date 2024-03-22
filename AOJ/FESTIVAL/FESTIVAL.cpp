#include <iostream>
#include <array>
#include <iomanip>

int main()
{
    int C;
    std::cin >> C;

    int N, L;
    std::array<double, 1001> cost{};
    std::array<double, 1001> partial_sum{};

    std::cout << std::fixed << std::setprecision(11);

    while (C--)
    {   
        double min_avg_cost = 100.0;

        std::cin >> N >> L;

        for (int i = 1; i <= N; ++i)
        {
            std::cin >> cost[i];
            partial_sum[i] = partial_sum[i - 1] + cost[i];
        }

        for (int i = L; i <= N; ++i)
        {
            for (int j = i; j <= N; ++j)
            {
                if ((partial_sum[j] - partial_sum[j - i]) / i < min_avg_cost)
                    min_avg_cost = (partial_sum[j] - partial_sum[j - i]) / i;
            }
        }

        std::cout << min_avg_cost << '\n';
    }

    return 0;
}

// 부분 합을 이용하자!