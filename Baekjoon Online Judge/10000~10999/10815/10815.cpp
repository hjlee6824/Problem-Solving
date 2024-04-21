#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        int input;
        cin >> input;

        if (binary_search(v.begin(), v.end(), input))
        {
            cout << 1 << ' ';
        }
        else
        {
            cout << 0 << ' ';
        }
    }

    return 0;
}