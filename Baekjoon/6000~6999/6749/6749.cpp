#include <iostream>

int main()
{
    int Y, M;
    std::cin >> Y >> M;

    int diff{ M - Y };
    std::cout << M + diff << '\n';
    
    return 0;
}