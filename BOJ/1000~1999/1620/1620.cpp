#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> m;
    vector<string> v(N);
    string str;

    for (int i = 1; i <= N; ++i)
    {
        cin >> str;

        m.insert(make_pair(str, i));
        v[i - 1] = str;
    }

    for (int i = 0; i < M; ++i)
    {
        cin >> str;

        if (str[0] >= 'A' && str[0] <= 'Z')
        {
            cout << m[str] << '\n';
        }
        else
        {
            cout << v[stoi(str) - 1] << '\n';
        }
    }

    return 0;
}