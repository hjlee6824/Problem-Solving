#include <iostream>
#include <vector>
using namespace std;

bool prime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i < n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    int count = 0;

    for (int i = 0; i < N; ++i)
    {
        cin >> v[i];
        if (prime(v[i]))
            ++count;
    }

    cout << count;

    return 0;
}