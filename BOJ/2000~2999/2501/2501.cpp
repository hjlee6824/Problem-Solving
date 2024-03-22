#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> divisors{};

    for (int i = 1; i <= N; ++i)
    {
        if (N % i == 0)
            divisors.push_back(i);
    }

    if (divisors.size() < K)
        cout << 0;
    else
        cout << divisors[K - 1];

    return 0;
}