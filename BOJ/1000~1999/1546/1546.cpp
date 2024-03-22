#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    int n;
    std::cin >> n;

    std::array<int, 1000> score{};

    for (int i = 0; i < n; ++i)
        std::cin >> score[i];

    double m = *std::max_element(score.begin(), score.begin() + n);
    double total = 0.0;

    for (int i = 0; i < n; ++i)
        total += score[i] / m * 100.0;

    std::cout << static_cast<double>(total / n);

    return 0;
}