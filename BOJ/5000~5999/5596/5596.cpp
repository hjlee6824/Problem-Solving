#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int S = 0, T = 0;

    int input;
    for (int i = 0; i < 4; ++i)
    {
        cin >> input;
        S += input;
    }
    
    for (int i = 0; i < 4; ++i)
    {
        cin >> input;
        T += input;
    }

    if (S > T) cout << S;
    else cout << T;

    return 0;
}