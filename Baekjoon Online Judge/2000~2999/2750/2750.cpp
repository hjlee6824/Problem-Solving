#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> arr(N);

    for (auto& e : arr)
        cin >> e;

    sort(arr.begin(), arr.end());

    for (const auto& e : arr)
        cout << e << '\n';

    return 0;
}