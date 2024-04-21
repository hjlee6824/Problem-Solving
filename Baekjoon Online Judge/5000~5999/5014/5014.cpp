#include <bits/stdc++.h>
using namespace std;

int F, S, G, U, D;
int dist[1000001];

queue<int> q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> F >> S >> G >> U >> D;

    fill(dist, dist + 1000001, -1);

    dist[S] = 0;
    q.push(S);

    while (!q.empty())
    {
        int cur = q.front(); q.pop();

        for (int dir : {U, -D})
        {
            int nx = cur + dir;

            if (nx < 1 || nx > F || dist[nx] >= 0) continue;

            dist[nx] = dist[cur] + 1;
            q.push(nx);
        }
    }

    if (dist[G] == -1) cout << "use the stairs";
    else cout << dist[G];

    return 0;
}