#include <iostream>
using namespace std;

int main()
{
    int X;
    cin >> X;

    int n = 0, i = 0;

    while (X > i)
    {
        ++n;
        i += n;
    }

    if (n % 2 == 0)
        cout << n - (i - X) << '/' << i - X + 1 << '\n';
    else
        cout << i - X + 1 << '/' << n - (i - X) << '\n';

    return 0;
}