#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> v(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < N; ++i)
    {
        int k = 0;

        for (int j = 0; j < N; ++j)
        {
            if (v[i].first < v[j].first && v[i].second < v[j].second)
                ++k;
        }

        cout << k + 1 << ' ';
    }

    return 0;
}