#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    vector<string> v(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int count = 0;

    for (int i = 0; i < M; ++i)
    {
        string str;
        cin >> str;

        if (binary_search(v.begin(), v.end(), str))
        {
            ++count;
        }
    }

    cout << count;

    return 0;
}