#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int count_of_2 = 0, count_of_5 = 0;

    for (int i = 1; i <= N; ++i)
    {
        int temp = i;

        while (temp % 2 == 0)
        {
            temp /= 2;
            ++count_of_2;
        }

        while (temp % 5 == 0)
        {
            temp /= 5;
            ++count_of_5;
        }
    }

    cout << ((count_of_2 < count_of_5) ? count_of_2 : count_of_5);

    return 0;
}