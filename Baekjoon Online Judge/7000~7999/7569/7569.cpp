#include <bits/stdc++.h>
using namespace std;

int M, N, H;
int dist[100][100][100];
int dx[6] = {0, 0, 0, 0, -1, 1};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {-1, 1, 0, 0, 0, 0};
queue<tuple<int, int, int>> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> M >> N >> H;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int k = 0; k < M; ++k)
            {
                int input;
                cin >> input;

                if (input == 1) q.push({j, k, i});
                if (input == 0) dist[j][k][i] = -1;
            }
        }
    }

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();
        int cur_x, cur_y, cur_z;
        tie(cur_x, cur_y, cur_z) = cur;

        for (int dir = 0; dir < 6; ++dir)
        {
            int nx = cur_x + dx[dir];
            int ny = cur_y + dy[dir];
            int nz = cur_z + dz[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M || nz < 0 || nz >= H) continue;
            if (dist[nx][ny][nz] >= 0) continue;

            dist[nx][ny][nz] = dist[cur_x][cur_y][cur_z] + 1;
            q.push({nx, ny, nz});
        }
    }

    int ans = 0;

    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int k = 0; k < M; ++k)
            {
                if (dist[j][k][i] == -1)
                {
                    cout << -1;
                    return 0;
                }

                ans = max(ans, dist[j][k][i]);
            }
        }
    }

    cout << ans;

    return 0;
}