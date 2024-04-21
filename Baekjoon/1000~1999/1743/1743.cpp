#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, M, K;
int arr[100][100];
bool visited[100][100];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int, int>> q;

int bfs(int x, int y)
{
    int area = 0;

    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();
        ++area;

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (arr[nx][ny] != 1 || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }

    return area;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> K;

    for (int i = 0; i < N; ++i) fill(visited[i], visited[i] + M, false);

    for (int i = 0; i < K; ++i) {
        int r, c;
        cin >> r >> c;
        arr[r - 1][c - 1] = 1;
    }

    int ans = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (arr[i][j] == 1 && !visited[i][j]) {
                ans = max(ans, bfs(i, j));
            }
        }
    }

    cout << ans;

    return 0;
}