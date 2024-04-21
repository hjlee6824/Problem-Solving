#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string a, b;
    std::cin >> a >> b;

    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(), b.end());

    int reverse_a = stoi(a);
    int reverse_b = stoi(b);

    if (reverse_a > reverse_b)
        std::cout << reverse_a;
    else
        std::cout << reverse_b;

    return 0;
}