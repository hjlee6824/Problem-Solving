#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> prefixSum(N + 1);

    for (int i = 1; i <= N; ++i)
    {
        int temperature;
        cin >> temperature;

        prefixSum[i] = prefixSum[i - 1] + temperature;
    }

    int max = -10000000; // 온도의 합이 음수가 가능하다는 점을 조심해야 함
    for (int i = K; i <= N; ++i)
    {
        int partialSum = prefixSum[i] - prefixSum[i - K];

        if (max < partialSum)
            max = partialSum;
    }

    cout << max << '\n';

    return 0;
}