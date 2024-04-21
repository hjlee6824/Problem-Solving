#include <bits/stdc++.h>
using namespace std;

int n, m, cnt, max_area;
int arr[500][500];
bool visited[500][500];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    visited[x][y] = true;
    q.push({x, y});
    
    int area = 0;
    while (!q.empty())
    {
        auto cur = q.front(); q.pop();
        ++area;

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (arr[nx][ny] == 0 || visited[nx][ny]) continue;
            
            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }

    return area;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] == 0 || visited[i][j]) continue;
            max_area = max(max_area, bfs(i, j));
            ++cnt;
        }
    }

    cout << cnt << '\n' << max_area;

    return 0;
}