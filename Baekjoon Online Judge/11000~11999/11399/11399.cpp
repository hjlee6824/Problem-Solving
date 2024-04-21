#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::vector<int> person(N);
    for (auto& p : person)
        std::cin >> p;

    std::sort(person.begin(), person.end());

    int sum{ 0 };
    
    for (int i{ 0 }; i < N; ++i)
        for (int j{ 0 }; j <= i; ++j)
            sum += person[j];

    std::cout << sum;

    return 0;
}