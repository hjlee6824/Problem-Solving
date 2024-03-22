#include <iostream>
#include <vector>
using namespace std;

int count(vector<int>& v, int n)
{
    int cnt = 0;

    for (const auto& e : v)
        if (e == n)
            ++cnt;

    return cnt;
}

int main()
{
    vector<int> X(3), Y(3);

    for (int i = 0; i < 3; ++i)
        cin >> X[i] >> Y[i];

    int ans_x, ans_y;

    for (const auto& e : X)
        if (count(X, e) == 1)
            ans_x = e;

    for (const auto& e : Y)
        if (count(Y, e) == 1)
            ans_y = e;

    cout << ans_x << ' ' << ans_y;

    return 0;
}