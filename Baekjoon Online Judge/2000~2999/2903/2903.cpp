#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int start{ 2 };

    for (int i{ 0 }; i < N; ++i)
        start += (start - 1);

    cout << start * start;

    return 0;
}