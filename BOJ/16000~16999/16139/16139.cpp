#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string S{};
    cin >> S;

    int length{ static_cast<int>(S.size()) };

    vector<vector<int>> prefixSumOfAlphabets(26, vector<int>(length + 1));

    for (int i = 0; i < 26; ++i)
    {
        for (int j = 1; j <= length; ++j)
        {
            prefixSumOfAlphabets[i][j] = prefixSumOfAlphabets[i][j - 1];

            if ((S[j - 1] - 'a') == i)
                 ++prefixSumOfAlphabets[i][j];
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        char a;
        int l, r;
        cin >> a >> l >> r;

        cout << prefixSumOfAlphabets[a - 'a'][r + 1] - prefixSumOfAlphabets[a - 'a'][l] << '\n';
    }

    return 0;
}