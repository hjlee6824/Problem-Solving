#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> prefixSum(N + 1, vector<int>(M + 1));

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= M; ++j)
        {   
            int input; 
            cin >> input;

            prefixSum[i][j] = prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1] + input;
        }
    }

    int K;
    cin >> K;

    while (K--)
    {
        int i, j, x, y;
        cin >> i >> j >> x >> y;

        cout << prefixSum[x][y] - prefixSum[x][j - 1] - prefixSum[i - 1][y] + prefixSum[i - 1][j - 1] << '\n';

    }
    return 0;
}