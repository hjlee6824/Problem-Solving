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

    vector<int> coordinates(N);

    for (int i = 0; i < N; ++i)
        cin >> coordinates[i];

    vector<int> temp = coordinates;

    sort(temp.begin(), temp.end());
    temp.erase(unique(temp.begin(), temp.end()), temp.end());

    for (auto& e : coordinates)
        cout << lower_bound(temp.begin(), temp.end(), e) - temp.begin() << ' ';

    return 0;
}