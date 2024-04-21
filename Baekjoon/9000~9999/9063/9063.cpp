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

    vector<int> x(N), y(N);

    for (int i = 0; i < N; ++i)
        cin >> x[i] >> y[i];

    if (N == 1)
    {
        cout << 0;
        return 0;
    }

    int min_x = *min_element(x.begin(), x.end());
    int max_x = *max_element(x.begin(), x.end());
    int min_y = *min_element(y.begin(), y.end());
    int max_y = *max_element(y.begin(), y.end());

    cout << (max_x - min_x) * (max_y - min_y);

    return 0;
}
