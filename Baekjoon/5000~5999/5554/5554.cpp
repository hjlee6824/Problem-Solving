#include <iostream>

int main()
{
    int input;
    int totalTime{ 0 };
    
    for (int i{ 0 }; i < 4; ++i)
    {
        std::cin >> input;
        totalTime += input;
    }

    std::cout << totalTime / 60 << '\n' << totalTime % 60;
    
    return 0;
}