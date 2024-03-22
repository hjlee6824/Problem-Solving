#include <iostream>
#include <cmath>

int main()
{
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;

    std::cout << std::min(std::min(x, w - x), std::min(y, h - y));
    
    return 0;
}