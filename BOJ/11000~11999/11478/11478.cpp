#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    int count = 0;

    for (int i = 1; i <= S.size(); ++i)
    {
        unordered_set<string> v;

        for (int j = 0; j + i - 1 < S.size(); ++j)
        {
            v.insert(S.substr(j, i));
        }

        count += v.size();
    }

    cout << count;

    return 0;
}