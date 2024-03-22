#include <bits/stdc++.h>
using namespace std;

int N, M;
string arr[100];
int dist[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs()
{
    queue<pair<int, int>> q;
    dist[0][0] = 0;
    q.push({0, 0});

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (arr[nx][ny] == '0' || dist[nx][ny] >= 0) continue;

            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) cin >> arr[i];
    for (int i = 0; i < N; ++i) fill(dist[i], dist[i] + M, -1);

    bfs();

    cout << dist[N - 1][M - 1] + 1;

    return 0;
}