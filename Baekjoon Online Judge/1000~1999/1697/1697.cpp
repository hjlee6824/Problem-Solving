#include <bits/stdc++.h>
using namespace std;

int N, K;
int dist[100001];
queue<int> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> K;

    fill(dist, dist + 100001, -1);

    dist[N] = 0;
    q.push(N);

    while (!q.empty())
    {
        int cur = q.front(); q.pop();

        for (int dir : {cur - 1, cur + 1, cur * 2})
        {
            if (dir < 0 || dir > 100000) continue;
            if (dist[dir] >= 0) continue;

            dist[dir] = dist[cur] + 1;
            q.push(dir);
        }
    }

    cout << dist[K];

    return 0;
}