#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int t;
    std::cin >> t;

    int quarter, dime, nickel, penny;

    while (t--)
    {
        int c;
        std::cin >> c;

        quarter = c / 25;
        c -= quarter * 25;

        dime = c / 10;
        c -= dime * 10;

        nickel = c / 5;
        c -= nickel * 5;

        penny = c;

        std::cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
    }

    return 0;
}