#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;

    vector<int> A(N + 1);

    for (int i = 1; i <= N; ++i)
        cin >> A[i];

    sort(A.begin(), A.end());

    vector<int> prefixSum(N + 1);

    for (int i = 1; i <= N; ++i)
        prefixSum[i] = prefixSum[i - 1] + A[i];

    while (Q--)
    {
        int L, R;
        cin >> L >> R;

        cout << prefixSum[R] - prefixSum[L - 1] << '\n';
    }

    return 0;
}