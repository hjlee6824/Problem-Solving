#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N);
    vector<int> count(8001);

    int sum = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; ++i)
    {
        ++count[v[i] + 4000];
    }

    int mean = round(sum / static_cast<double>(N));
    int median = v[N / 2];
    int max_count_mode = *max_element(count.begin(), count.end());
    int range = v[N - 1] - v[0];

    int index = 0;
    int mode;
    
    for (int i = 0; i < count.size(); ++i)
    {
        if (index == 2) break;

        if (count[i] == max_count_mode)
        {
            ++index;
            mode = i - 4000;
        }
    }

    cout << mean << '\n' << median << '\n' << mode << '\n' << range;

    return 0;
}