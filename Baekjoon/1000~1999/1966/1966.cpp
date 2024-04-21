#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int N, M;
        cin >> N >> M;

        queue<int> q;
        vector<int> priority(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> priority[i];
            q.push(i);
        }

        int count = 0;
        bool found = false;

        while (!found)
        {
            int max = *max_element(priority.begin(), priority.end());
            
            if (priority[q.front()] != max)
            {
                q.push(q.front());
                q.pop();
                continue;
            }

            if (q.front() == M)
                found = true;

            ++count;
            priority[q.front()] = 0;
            q.pop();
        }

        cout << count << '\n';
    }

    return 0;
}