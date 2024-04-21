#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> countNumbers(10001);

    for (int i{ 0 }; i < N; ++i)
    {
        int input{};
        cin >> input;

        ++countNumbers[input];
    }

    for (int number{ 1 }; number <= 10000; ++number)
        for (int count{ 0 }; count < countNumbers[number]; ++count)
            cout << number << '\n';

    return 0;
}