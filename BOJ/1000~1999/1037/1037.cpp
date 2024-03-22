#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count;
    cin >> count;

    vector<int> factors(count);

    for (int i = 0; i < count; ++i)
        cin >> factors[i];

    cout << (*min_element(factors.begin(), factors.end())) * (*max_element(factors.begin(), factors.end()));

    return 0;
}