#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    int start = static_cast<int>(round(n * 0.15));
    int end = n - static_cast<int>(round(n * 0.15));
    int sum = 0, avg = 0;

    for (int i = start; i < end; ++i)
        sum += v[i];

    if (n != 0)
        avg = round(static_cast<double>(sum) / (end - start));

    cout << avg;

    return 0;
}