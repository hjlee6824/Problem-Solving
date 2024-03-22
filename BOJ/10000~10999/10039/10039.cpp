#include <iostream>
#include <vector>

int main()
{
    std::vector<int> score(5);
    int sum{ 0 };

    for (auto student : score)
    {
        std::cin >> student;

        if (student < 40)
            student = 40;

        sum += student;
    }
        
    std::cout << sum / 5 << '\n';

    return 0;
}