#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string N;
    cin >> N;

    vector<int> numbers{};

    for (auto e : N)
        numbers.push_back(e - '0');

    sort(numbers.begin(), numbers.end(), greater<int>());

    for (const auto& e : numbers)
        cout << e;

    return 0;
}