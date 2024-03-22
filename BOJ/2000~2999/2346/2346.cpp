#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    deque<int> dq;
    vector<int> v(N + 1);

    for (int i = 1; i <= N; ++i)
    {
        cin >> v[i];
        dq.push_back(i);
    }
    
    while (true)
    {
        int move = v[dq.front()];
        cout << dq.front() << ' ';
        dq.pop_front();

        if (dq.empty())
            break;

        if (move > 0)
        {
            for (int i = 0; i < move - 1; ++i)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else
        {
            for (int i = move; i < 0; ++i)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }

    return 0;
}