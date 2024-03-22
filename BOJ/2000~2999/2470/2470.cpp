#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int left = 0, right = N - 1;
    int x = arr[left], y = arr[right];
    int min = 2000000000;

    while (left != right)
    {
        int sum = arr[left] + arr[right];

        if (abs(sum) < min)
        {
            min = abs(sum);
            x = arr[left];
            y = arr[right];
        }

        if (sum < 0)
            ++left;
        else
            --right;
    }

    cout << x << ' ' << y << '\n';

    return 0;
}