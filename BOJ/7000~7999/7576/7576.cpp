#include <bits/stdc++.h>
using namespace std;

int M, N;
int arr[1000][1000];
int dist[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs()
{
    while (!q.empty())
    {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (dist[nx][ny] >= 0) continue;

            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1) q.push({i, j});
            if (arr[i][j] == 0) dist[i][j] = -1;
        }
    }

    bfs();

    int ans = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (dist[i][j] == -1)
            {
                cout << -1;
                return 0;
            }

            ans = max(ans, dist[i][j]);
        }
    }

    cout << ans;

    return 0;
}