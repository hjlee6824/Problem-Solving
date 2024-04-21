#include <bits/stdc++.h>
using namespace std;

int L, R, C;
char arr[30][30][30];
int dist[30][30][30];
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0 };
int dz[6] = {0, 0, 0, 0, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        queue<tuple<int, int, int>> q;

        cin >> L >> R >> C;

        if (L == 0) break;

        for (int i = 0; i < L; ++i)
            for (int j = 0; j < R; ++j)
                fill(dist[i][j], dist[i][j] + C, -1);

        for (int i = 0; i < L; ++i)
        {
            for (int j = 0; j < R; ++j)
            {
                for (int k = 0; k < C; ++k)
                {
                    cin >> arr[i][j][k];

                    if (arr[i][j][k] == 'S')
                    {
                        dist[i][j][k] = 0;
                        q.push({i, j, k});
                    }
                }
            }
        }

        bool isEscaped = false;

        while (!q.empty() && !isEscaped)
        {
            auto cur = q.front(); q.pop();

            int cur_x, cur_y, cur_z;
            tie(cur_x, cur_y, cur_z) = cur;

            for (int dir = 0; dir < 6; ++dir)
            {
                int nx = cur_x + dx[dir];
                int ny = cur_y + dy[dir];
                int nz = cur_z + dz[dir];

                if (nx < 0 || nx >= L || ny < 0 || ny >= R || nz < 0 || nz >= C) continue;
                if (arr[nx][ny][nz] == '#' || dist[nx][ny][nz] >= 0) continue;

                dist[nx][ny][nz] = dist[cur_x][cur_y][cur_z] + 1;

                if (arr[nx][ny][nz] == 'E')
                {
                    cout << "Escaped in " << dist[nx][ny][nz] << " minute(s).\n";
                    isEscaped = true;
                    break;
                }
                
                q.push({nx, ny, nz});
            }
        }

        if (!isEscaped) cout << "Trapped!\n";
    }

    return 0;
}