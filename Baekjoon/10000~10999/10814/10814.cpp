#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool compare(const pair<int, string>& p1, const pair<int, string>& p2)
{
    return p1.first < p2.first;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, string>> members(N);

    for (auto& member : members)
        cin >> member.first >> member.second;

    stable_sort(members.begin(), members.end(), compare);

    for (const auto& member : members)
        cout << member.first << ' ' << member.second << '\n';

    return 0;
}