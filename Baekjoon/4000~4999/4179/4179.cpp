#include <bits/stdc++.h>
using namespace std;

int R, C;
string arr[1000];
int dist1[1000][1000];
int dist2[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q1, q2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;

    for (int i = 0; i < R; ++i) cin >> arr[i];

    for (int i = 0; i < R; ++i) 
    {
        fill(dist1[i], dist1[i] + C, -1);
        fill(dist2[i], dist2[i] + C, -1);
    }

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            if (arr[i][j] == 'F') 
            {
                dist1[i][j] = 0;
                q1.push({i, j});
            }
            
            if (arr[i][j] == 'J') 
            {
                dist2[i][j] = 0;
                q2.push({i, j}); 
            }
        }
    }

    while (!q1.empty())
    {
        auto cur = q1.front(); q1.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (dist1[nx][ny] >= 0 || arr[nx][ny] == '#') continue;

            dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
            q1.push({nx, ny});
        }
    }

    while (!q2.empty())
    {
        auto cur = q2.front(); q2.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                cout << dist2[cur.first][cur.second] + 1;
                return 0;
            }

            if (dist2[nx][ny] >= 0 || arr[nx][ny] == '#') continue;
            if (dist1[nx][ny] != -1 && dist2[cur.first][cur.second] + 1 >= dist1[nx][ny]) continue;

            dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
            q2.push({nx, ny});
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}