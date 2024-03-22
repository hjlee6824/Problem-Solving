#include <iostream>
#include <vector>

int fibonacci(int n)
{
    static std::vector<int> results{0, 1};

    if (n < results.size())
        return results[n];

    results.push_back(fibonacci(n - 2) + fibonacci(n - 1));
    return results[n];
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    std::cout << fibonacci(n);

    return 0;
}