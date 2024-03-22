#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    queue<int> q;

    for (int i = 1; i <= N; ++i)
        q.push(i);

    cout << '<';

    while (q.size() != 1)
    {
        for (int i = 0; i < K - 1; ++i)
        {
            int temp = q.front();
            q.push(temp);
            q.pop();
        }

        cout << q.front() << ", ";
        q.pop();
    }

    cout << q.front() << ">\n";

    return 0;
}