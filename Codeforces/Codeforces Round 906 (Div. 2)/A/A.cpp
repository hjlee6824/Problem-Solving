#include <iostream>
#include <set>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        int input;
        std::set<int> a;
        std::multiset<int> b;

        for (int i = 0; i < n; ++i)
        {
            std::cin >> input;
            a.insert(input);
            b.insert(input);
        }

        if (a.size() == 1)
        {
            std::cout << "Yes\n";
            continue;
        }

        if (a.size() > 2)
        {
            std::cout << "No\n";
            continue;
        }

        int diff = b.count(*a.begin()) - b.count(*(++a.begin()));

        if (std::abs(diff) < 2)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }

    return 0;
}