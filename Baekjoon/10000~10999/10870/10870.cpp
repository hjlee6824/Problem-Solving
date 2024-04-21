#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n)
{
    static vector results{0, 1};

    if (n < results.size())
        return results[n];

    results.push_back(fibonacci(n - 2) + fibonacci(n - 1));
    
    return results[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}