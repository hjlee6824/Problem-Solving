#include <bits/stdc++.h>
using namespace std;

int n, num_to_push = 1;
stack<int> s;
string ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int input;
        cin >> input;

        while (input >= num_to_push)
        {
            s.push(num_to_push++);
            ans += "+\n";
        }

        if (input != s.top())
        {
            cout << "NO";
            return 0;
        }

        s.pop();
        ans += "-\n";
    }

    for (auto ch : ans) cout << ch;
    
    return 0;
}