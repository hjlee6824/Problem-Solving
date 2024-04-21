#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> prefixSum(N + 1);

    for (int i = 1; i <= N; ++i)
    {
        int input;
        cin >> input;

        prefixSum[i] = prefixSum[i - 1] + input;
    }

    int M;
    cin >> M;

    while (M--)
    {
        int i, j;
        cin >> i >> j;

        cout << prefixSum[j] - prefixSum[i - 1] << '\n';
    }

    return 0;
}