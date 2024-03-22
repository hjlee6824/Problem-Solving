#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int arr[1000][1000];
int dist[1000][1000];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int, int>> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; ++i) fill(dist[i], dist[i] + m, -1);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];

            if (arr[i][j] == 2) {
                dist[i][j] = 0;
                q.push({i, j});
            }
            else if (arr[i][j] == 0) {
                dist[i][j] = 0;
            }
        }
    }
        
    while (!q.empty())
    {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx > n || ny < 0 || ny >= m) continue;
            if (arr[nx][ny] != 1 || dist[nx][ny] >= 0) continue;

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            q.push({nx, ny});
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << dist[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}