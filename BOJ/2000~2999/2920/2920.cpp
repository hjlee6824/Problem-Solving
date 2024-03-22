#include <iostream>

int main()
{
    int arr[8];

    for (int i = 0; i < 8; ++i)
        std::cin >> arr[i];

    int ascending[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int descending[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };

    bool isAscending = true;
    bool isDescending = true;

    for (int i = 0; i < 8; ++i)
    {
        if (arr[i] != ascending[i])
            isAscending = false;

        if (arr[i] != descending[i])
            isDescending = false;
    }

    if (isAscending)
        std::cout << "ascending\n";
    else if (isDescending)
        std::cout << "descending\n";
    else
        std::cout << "mixed\n";

    return 0;
}