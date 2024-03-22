#include <iostream>
using namespace std;

int main()
{
    int K, N, M;
    cin >> K >> N >> M;

    int total_price = K * N;

    if (total_price > M)
        cout << total_price - M;
    else
        cout << 0;

    return 0;
}