#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, S;
    cin >> N >> S;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    int minLength = 100000;
    int start = -1, end = -1;
    int sum = 0;
    bool flag = false;

    while (end < N)
    {
        if (sum < S)
        {
            sum += arr[++end];
        }
        else
        {
            if (end - start < minLength)
            {
                minLength = end - start;
                flag = true;
            }

            sum -= arr[++start];
        }
    }

    if (flag)
        cout << minLength << '\n';
    else
        cout << 0 << '\n';

    return 0;
}