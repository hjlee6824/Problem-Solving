#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int v;
    std::cin >> v;

    int count{ 0 };

    for (int i = 0; i < n; ++i)
        if (arr[i] == v)
            ++count;

    std::cout << count << '\n';

    return 0;
}