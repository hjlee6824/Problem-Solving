#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v(3);

    for (auto& e : v)
        std::cin >> e;

    std::sort(v.begin(), v.end());

    std::cout << v[1];
    
    return 0;
}