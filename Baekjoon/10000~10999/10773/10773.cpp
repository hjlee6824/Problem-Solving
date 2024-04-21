#include <bits/stdc++.h>
using namespace std;

int K, sum = 0;
stack<int> s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> K;

    while (K--)
    {
        int input;
        cin >> input;

        if (input) s.push(input);
        else s.pop();
    }

    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }

    cout << sum;

    return 0;
}