#include <iostream>

int main()
{
    int A;

    int sum{ 0 };
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> A;
        sum += A;
    }
    
    std::cout << sum << '\n';

    return 0;
}