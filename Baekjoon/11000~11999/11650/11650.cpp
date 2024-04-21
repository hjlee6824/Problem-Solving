#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.first == b.first)
        return a.second < b.second;

    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> coordinates(N);

    for (auto& c : coordinates)
        std::cin >> c.first >> c.second;

    std::sort(coordinates.begin(), coordinates.end(), compare);

    for (const auto& c : coordinates)
        std::cout << c.first << ' ' << c.second << '\n';

    return 0;
}