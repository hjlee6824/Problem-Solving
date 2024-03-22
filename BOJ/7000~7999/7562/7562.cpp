#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int t, l;
int dist[300][300];
int dx[8] = {-2, -2, 2, 2, -1, -1, 1, 1};
int dy[8] = {-1, 1, -1, 1, -2, 2, -2, 2};
queue<pair<int, int>> q;

void bfs(int x, int y)
{
    dist[x][y] = 0;
    q.push({x, y});

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 8; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
            if (dist[nx][ny] >= 0) continue;

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> l;

        for (int i = 0; i < l; ++i) fill(dist[i], dist[i] + l, -1);

        int from_x, from_y, to_x, to_y;
        cin >> from_x >> from_y >> to_x >> to_y;

        bfs(from_x, from_y);

        cout << dist[to_x][to_y] << '\n';
    }

    return 0;
}