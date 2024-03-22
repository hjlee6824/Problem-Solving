#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool compare(const pair<int, int>& p1, const pair<int, int>& p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;

    return p1.second < p2.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> coordinates(N);

    for (auto& c : coordinates)
        cin >> c.first >> c.second;

    sort(coordinates.begin(), coordinates.end(), compare);

    for (const auto& c : coordinates)
        cout << c.first << ' ' << c.second << '\n';

    return 0;
}