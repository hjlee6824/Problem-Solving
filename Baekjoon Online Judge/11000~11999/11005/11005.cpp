#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, B;
    cin >> N >> B;

    vector<int> remainders{};

    while (N / B != 0)
    {
        remainders.push_back(N % B);
        N /= B;
    }

    remainders.push_back(N);
    int digit{ static_cast<int>(remainders.size()) };

    for (int i{ 0 }; i < digit; ++i)
    {
        if (remainders.back() >= 10)
            cout << static_cast<char>(remainders.back() - 10 + 'A');
        else
            cout << remainders.back();

        remainders.pop_back();
    }

    return 0;
}