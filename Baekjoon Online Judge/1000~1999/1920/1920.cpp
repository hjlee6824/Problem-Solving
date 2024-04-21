#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool binary_search(vector<int>& v, int n)
{
    int start = 0;
    int end = v.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (v[mid] == n)
            return true;
        else if (v[mid] > n)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; ++i)
        cin >> A[i];

    sort(A.begin(), A.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        int target;
        cin >> target;
        cout << binary_search(A, target) << '\n';
    }

    return 0;
}