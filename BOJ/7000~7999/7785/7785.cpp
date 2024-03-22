#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string, greater<string>> s;

    for (int i = 0; i < n; ++i)
    {
        string name, log;
        cin >> name >> log;

        if (log == "enter")
        {
            s.insert(name);
        }
        else
        {
            s.erase(name);
        }
    }

    for (const auto& e : s)
    {
        cout << e << '\n';
    }
}