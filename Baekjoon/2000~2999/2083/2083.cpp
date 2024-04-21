#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string name;
        int age, weight;

        cin >> name >> age >> weight;
        if (name == "#") break;

        if (age > 17 || weight >= 80) name += " Senior";
        else name += " Junior";

        cout << name << '\n';
    }

    return 0;
}