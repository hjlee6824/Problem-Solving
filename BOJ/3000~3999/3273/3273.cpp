#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int x;
    cin >> x;

    int start = 0, end = n - 1;
    int count = 0;

    while (start != end)
    {
        int sum = arr[start] + arr[end];

        if (sum < x)
            ++start;
        else if (sum > x)
            --end;
        else
        {
            ++count;
            ++start;
        }
    }

    cout << count << '\n';

    return 0;
}