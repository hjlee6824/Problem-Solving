#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int total_min = a * 60 + b + c;
    const int dayToMin = 1440;

    if (total_min >= dayToMin)
        total_min -= dayToMin;

    std::cout << total_min / 60 << ' ' << total_min % 60 << '\n';

    return 0;
}