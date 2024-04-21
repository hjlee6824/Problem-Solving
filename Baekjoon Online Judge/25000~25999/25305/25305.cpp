#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, k;
    cin >> N >> k;

    vector<int> v(N);

    for (int i = 0; i < N; ++i)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    cout << v[k - 1] << '\n';

    return 0;
}