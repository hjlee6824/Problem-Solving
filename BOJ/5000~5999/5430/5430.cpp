#include <bits/stdc++.h>
using namespace std;

void parse(string_view str, deque<int>& dq)
{
    string num;

    for (int i = 1; i + 1 < str.size(); ++i)
    {
        if (str[i] == ',') 
        {
            dq.push_back(stoi(num));
            num = "";
            continue;
        }

        num += str[i];
    }

    if (num != "") dq.push_back(stoi(num));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n;
        string p, arr;
        deque<int> dq;

        cin >> p >> n >> arr;
        
        parse(arr, dq);

        bool isReversed = false, isError = false;
        for (auto ch : p)
        {
            if (ch == 'R') isReversed = !isReversed;
            else
            {
                if (!dq.empty()) isReversed ? dq.pop_back() : dq.pop_front();
                else 
                {
                    isError = true;
                    break;
                }
            }
        }

        if (isError) 
        {
            cout << "error\n";
        }
        else
        {
            if (isReversed) reverse(dq.begin(), dq.end());

            cout << '[';
            for (int i = 0; i < dq.size(); ++i)
            {
                cout << dq[i];
                if (i + 1 != dq.size()) cout << ',';
            }
            cout << "]\n";
        }
    }

    return 0;
}