#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int maxAddress = 1;
    int minRoomCount = 1;

    while (N > maxAddress)
    {
        maxAddress += 6 * minRoomCount;
        ++minRoomCount;
    }

    cout << minRoomCount << '\n';

    return 0;
}