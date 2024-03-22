#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int binary_search(vector<pair<int, int>>& v, int n)
{
    int start = 0;
    int end = v.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (v[mid].first == n)
            return v[mid].second;
        else if (v[mid].first > n)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    vector<pair<int, int>> count;

    count.push_back({v[0], 1});

    for (int i = 1; i < N; ++i)
    {
        if (v[i] == count.back().first)
            ++count.back().second;
        else
            count.push_back({v[i], 1});
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        int target;
        cin >> target;
        cout << binary_search(count, target) << ' ';
    }

    return 0;
}