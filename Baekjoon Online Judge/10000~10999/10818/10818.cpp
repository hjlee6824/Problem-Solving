#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int input, min = 1000000, max = -1000000;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> input;

        if (input > max)
            max = input;

        if (input < min)
            min = input;
    }
        
    std::cout << min << ' ' << max << '\n';

    return 0;
}