#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string N;
    int B;

    cin >> N >> B;

    int sum{ 0 };
    int digit{ static_cast<int>(N.size() - 1) };

    for (auto e : N)
    {
        int charToInt{};

        if (e >= '0' && e <= '9')
            charToInt = e - '0';
        else
            charToInt = e - 'A' + 10;

        sum += charToInt * pow(B, digit);
        --digit;
    }

    cout << sum;

    return 0;
}