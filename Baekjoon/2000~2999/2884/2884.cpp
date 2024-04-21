#include <iostream>

int main()
{
    int h, m;
    std::cin >> h >> m;

    int new_h, new_m;

    const int hourToMinute = 60;
    const int dayToHour = 24;

    if (m < 45)
    {
        new_m = m + hourToMinute - 45;
        
        if (h == 0)
            new_h = h + dayToHour - 1;
        else
            new_h = h - 1;
    }
    else
    {
        new_m = m - 45;
        new_h = h;
    }

    std::cout << new_h << ' ' << new_m << '\n';

    return 0;
}