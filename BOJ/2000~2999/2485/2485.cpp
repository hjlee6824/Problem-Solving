#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> v(N);
    vector<int> diff(N - 1);

    for (int i = 0; i < N; ++i)
        cin >> v[i];

    for (int i = 0; i < N - 1; ++i)
    {
        diff[i] = v[i + 1] - v[i];
    }

    int first_tree = v[0];
    int last_tree = v[N - 1];
    int min_distance = diff[0];

    for (int i = 1; i < N - 1; ++i)
    {
        min_distance = gcd(min_distance, diff[i]);
    }

    cout << ((last_tree - first_tree) / min_distance + 1) - N;

    return 0;
}