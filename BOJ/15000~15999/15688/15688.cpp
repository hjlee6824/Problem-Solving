#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    constexpr int max_size = 1000000;
    vector<int> v(max_size * 2 + 1);

    for (int i = 0; i < N; ++i)
    {
        int input;
        cin >> input;
        ++v[input + max_size];
    }

    for (int i = 0; i <= max_size * 2; ++i)
    {
        while (v[i]--)
        {
            cout << i - max_size << '\n';
        }
    }

    return 0;
}