#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    int divisor = 2;

    while (N != 1)
    {
        if (N % divisor == 0)
        {
            cout << divisor << '\n';
            N /= divisor;
        }
        else
        {
            ++divisor;
        }
    }

    return 0;
}