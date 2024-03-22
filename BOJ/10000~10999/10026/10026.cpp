#include <bits/stdc++.h>
using namespace std;

int N;
string arr[100];
bool visited[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs(int x, int y)
{
    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (arr[nx][ny] != arr[cur.first][cur.second] || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i) cin >> arr[i];

    int not_rg = 0, rg = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (!visited[i][j])
            {
                bfs(i, j);
                ++not_rg;
            }
        }
    }

    for (int i = 0; i < N; ++i) fill(visited[i], visited[i] + N, false);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (arr[i][j] == 'G') arr[i][j] = 'R';
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (!visited[i][j])
            {
                bfs(i, j);
                ++rg;
            }
        }
    }

    cout << not_rg << ' ' << rg;

    return 0;
}