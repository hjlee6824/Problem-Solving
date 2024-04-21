#include <vector>

long long sum(std::vector<int>& a)
{
    long long sum{ 0 };
    int length{ static_cast<std::size_t>(std::size(a)) };

    for (int i{ 0 }; i < length; ++i)
        sum += a[i];

    return sum;
}