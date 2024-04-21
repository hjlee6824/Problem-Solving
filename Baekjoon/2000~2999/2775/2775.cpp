#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    vector<vector<int>> apartment(15, vector<int>(15));

    for (int i = 1; i <= 14; ++i)
        apartment[0][i] = i;

    for (int i = 1; i <= 14; ++i)
    {
        for (int j = 1; j <= 14; ++j)
        {
            apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];
        }
    }

    while (T--)
    {
        int k, n;
        cin >> k >> n;

        cout << apartment[k][n] << '\n';
    }

    return 0;
}