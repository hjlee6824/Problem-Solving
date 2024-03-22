#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> arr(N);

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    int count = 0;
    int start = -1, end = -1;
    int sum = 0;

    while (end < N)
    {
        if (sum < M)
        {
            sum += arr[++end];
        }
        else if (sum > M)
        {
            sum -= arr[++start];
        }
        else
        {
            sum += arr[++end];
            ++count;
        }
    }

    cout << count << '\n';
    
    return 0;
}