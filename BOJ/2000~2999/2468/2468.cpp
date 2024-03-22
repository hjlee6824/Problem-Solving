#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, max_height = 0, ans = 0;
int arr[100][100];
bool visited[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs(int x, int y, int height)
{
    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (arr[nx][ny] <= height || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> arr[i][j];
            max_height = max(max_height, arr[i][j]);
        }
    }

    for (int height = 0; height <= max_height; ++height)
    {
        int cnt = 0;

        for (int i = 0; i < N; ++i) fill(visited[i], visited[i] + N, false);

        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
            {
                if (arr[i][j] > height && !visited[i][j])
                {
                    bfs(i, j, height);
                    ++cnt;
                }
            }
        }

        ans = max(ans, cnt);
    }

    cout << ans;

    return 0;
}