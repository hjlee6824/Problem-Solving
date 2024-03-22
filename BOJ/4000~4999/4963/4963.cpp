#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int w, h;
int arr[50][50];
bool visited[50][50];
int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[8] = {0, 0, -1, 1, -1, 1, -1, 1};
queue<pair<int, int>> q;

void bfs(int x, int y)
{
    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 8; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (arr[nx][ny] == 0 || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        cin >> w >> h;
        if (w == 0 && h == 0) break;

        for (int i = 0; i < h; ++i) fill(visited[i], visited[i] + w, false);

        for (int i = 0; i < h; ++i)
            for (int j = 0; j < w; ++j)
                cin >> arr[i][j];

        int ans = 0;

        for (int i = 0; i < h; ++i)
        {
            for (int j = 0; j < w; ++j)
            {
                if (arr[i][j] == 1 && !visited[i][j])
                {
                    bfs(i, j);
                    ++ans;
                }
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}