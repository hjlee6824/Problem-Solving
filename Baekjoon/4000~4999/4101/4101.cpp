#include <iostream>
#include <string>
#include <string_view>

std::string_view isBigger(int a, int b)
{
    return a > b ? "Yes" : "No";
}

int main()
{
    int a, b;

    while (true)
    {
        std::cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        std::cout << isBigger(a, b) << '\n';
    }

    return 0;
}