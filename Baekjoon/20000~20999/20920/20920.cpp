#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

bool compare(pair<string, int>& p1, pair<string, int>& p2)
{
    if (p1.second == p2.second)
    {
        if (p1.first.size() == p2.first.size())
            return p1.first < p2.first;
        
        return p1.first.size() > p2.first.size();
    }
        
    return p1.second > p2.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    string input;
    unordered_map<string, int> um;
    vector<pair<string, int>> v;

    for (int i = 0; i < N; ++i)
    {
        cin >> input;

        if (input.size() >= M)
        {
            ++um[input];
        }
    }

    for (const auto& e : um)
    {
        v.push_back(e);
    }

    sort(v.begin(), v.end(), compare);

    for (const auto& e : v)
    {
        cout << e.first << '\n';
    }

    return 0;
}