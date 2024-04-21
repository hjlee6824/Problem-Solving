#include <bits/stdc++.h>
using namespace std;

int T, M, N, K;
int arr[50][50];
bool visited[50][50];
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

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (arr[nx][ny] == 0 || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> T;

    while (T--)
    {
        cin >> M >> N >> K;

        for (int i = 0; i < N; ++i) 
        {
            fill(arr[i], arr[i] + M, 0);
            fill(visited[i], visited[i] + M, false);
        }

        for (int i = 0; i < K; ++i)
        {
            int x, y;
            cin >> y >> x;
            arr[x][y] = 1;
        }

        int ans = 0;

        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                if (arr[i][j] == 0 || visited[i][j]) continue;
                bfs(i, j);
                ++ans;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}